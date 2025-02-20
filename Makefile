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
CFILES      :=  main.c init/init.c init/init_game.c utils/utils.c free_memory.c \
                parsing/parsing.c parsing/check_args.c parsing/check_rgb.c parsing/data_processing.c parsing/map.c parsing/check_path.c parsing/map_utils.c parsing/check_wall.c parsing/tabs.c \
                render/hooks.c render/movements.c render/images.c render/draw_squares.c render/wall.c \
                render/algorithm.c render/setup.c render/draw_loop.c

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