/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_squares.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 00:47:16 by leobarbo          #+#    #+#             */
/*   Updated: 2025/02/20 00:47:16 by leobarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub.h"

void	draw_background(t_cub *game)
{
	uint32_t	x;
	uint32_t	y;

	y = 0;
	while (y < game->mlx_image->height / 2)
	{
		x = 0;
		while (x < game->mlx_image->width)
		{
			mlx_put_pixel(game->mlx_image, x, y, game->data->ceiling);
			x++;
		}
		y++;
	}
	while (y < game->mlx_image->height)
	{
		x = 0;
		while (x < game->mlx_image->width)
		{
			mlx_put_pixel(game->mlx_image, x, y, game->data->floor);
			x++;
		}
		y++;
	}
}
