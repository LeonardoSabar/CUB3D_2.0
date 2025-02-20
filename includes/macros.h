/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   macros.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 00:27:16 by leobarbo          #+#    #+#             */
/*   Updated: 2025/02/20 00:27:16 by leobarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MACROS_H
# define MACROS_H

# include "cub.h"

# define WIDTH 800
# define HEIGHT 600
# define ROTATE_LEFT -0.5
# define ROTATE_RIGHT 0.5
# define TEXTURE_WIDTH 64
# define TEXTURE_HEIGHT 64

# define WARNING_ARGS_1 "Error: no map file.\n"
# define WARNING_ARGS_2 "Error: too many arguments.\n"
# define WARNING_EXT "Error: the map file must be .cub\n"
# define WARNING_PLAYER "Error: invalid player.\n"
# define WARNING_INVALID "Error: there are invalid characters on the map.\n"
# define WARNING_EMPTY_LINE "Error: empty line.\n"
# define WARNING_OPEN_MAP "Error: map is open.\n"


#endif