# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/20 00:44:26 by leobarbo          #+#    #+#              #
#    Updated: 2025/02/20 00:44:26 by leobarbo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        := cub3D
CFLAGS      := -Wextra -Wall -Werror -g3 -O3
MAKEFLAGS   += --silent

# LIBRARIES_PATH
LIBMLX      := ./MLX42
LIBFT_PATH  := ./libft
LIBFT       := $(addprefix $(LIBFT_PATH)/, libft.a)
MLX_REPO    := https://github.com/codam-coding-college/MLX42.git

# PATHS
CC          := gcc
SRC_PATH    := src
OBJ_PATH    := objects

# SOURCES
CFILES      :=  main.c init.c utils.c free_memory.c \
                validation/validation.c validation/check_rgb.c validation/data_processing.c validation/map.c validation/check_path.c validation/map_utils.c validation/check_wall.c validation/tabs.c \
                graphic/hooks.c graphic/movements.c graphic/images.c graphic/draw_squares.c graphic/wall.c \
                graphic/algorithm.c graphic/setup.c graphic/draw_loop.c

# PATH_FILES
SRCS        := $(addprefix $(SRC_PATH)/, $(CFILES))
OBJS        := $(addprefix $(OBJ_PATH)/, $(CFILES:%.c=%.o))

# HEADERS
HEADERS     := -I ./includes
HEADER_FILE := includes/cub.h ./MLX42/include
LIBS_MLX    := $(LIBMLX)/build/libmlx42.a -ldl -lglfw -pthread -lm

# LOADING BAR
TOTAL_FILES = $(words $(CFILES))
CURRENT_CFILES = 0

define print_progress
    $(eval CURRENT_CFILES=$(shell echo $$(($(CURRENT_CFILES)+1))))
    @echo -n "\rProgress: $(CURRENT_CFILES) / $(TOTAL_FILES) [$$(($(CURRENT_CFILES) * 100 / $(TOTAL_FILES))%)] : $(1) "
endef

all: libmlx $(OBJ_PATH) $(NAME)

libmlx:
	@if [ ! -d "$(LIBMLX)" ]; then \
		echo "Cloning MLX42 repository..."; \
		git clone $(MLX_REPO) $(LIBMLX); \
	fi
	@cmake $(LIBMLX) -B $(LIBMLX)/build && make -C $(LIBMLX)/build -j4

$(LIBFT):
	@make -C $(LIBFT_PATH)

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c $(HEADER_FILE) | $(OBJ_PATH)
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -o $@ -c $< $(HEADERS)
	$(call print_progress, Compiling: $<)
	@echo "                                     "

$(OBJ_PATH):
	@mkdir -p $(OBJ_PATH)

$(NAME): $(LIBFT) $(OBJS)
	@$(CC) $(OBJS) $(LIBS_MLX) $(LIBFT) $(HEADERS) -o $(NAME) -lm
	@echo "Compilation complete!"

clean:
	@rm -rf $(OBJ_PATH)
	@echo "Objects cleaned."

fclean: clean
	@rm -rf $(NAME)
	@rm -rf $(LIBMLX)/build
	@make fclean -C $(LIBFT_PATH)
	@echo "All cleaned."

clear:
	clear
	$(MAKE) all

re: fclean all

.PHONY: all clean fclean re libmlx