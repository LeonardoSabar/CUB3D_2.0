/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_memory.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 00:45:43 by leobarbo          #+#    #+#             */
/*   Updated: 2025/02/20 00:45:43 by leobarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub.h"

void	free_data(t_data *data)
{
	if (data->no)
		free(data->no);
	if (data->so)
		free(data->so);
	if (data->we)
		free(data->we);
	if (data->ea)
		free(data->ea);
	if (data->map)
		ft_free_matrix(data->map);
	if (data)
		free(data);
}

void	free_memory(t_cub *game)
{
	if (game)
		free_data(game->data);
	if (game->north)
		mlx_delete_texture(game->north);
	if (game->south)
		mlx_delete_texture(game->south);
	if (game->west)
		mlx_delete_texture(game->west);
	if (game->east)
		mlx_delete_texture(game->east);
}
