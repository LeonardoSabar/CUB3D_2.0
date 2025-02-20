/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_loop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 00:47:09 by leobarbo          #+#    #+#             */
/*   Updated: 2025/02/20 00:47:09 by leobarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub.h"

void	draw_playerview(void *param)
{
	t_cub	*game;

	game = (t_cub *)param;
	process_input(game);
	draw_background(game);
	update_image(game);
	draw_rays(game);
}
