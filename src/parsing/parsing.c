/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 00:49:06 by leobarbo          #+#    #+#             */
/*   Updated: 2025/02/20 00:49:06 by leobarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub.h"

void	parsing(int argc, char **argv, t_cub *game)
{
	t_validate	valid;

	check_arguments(argc);
	check_extension(argv[1]);
	data_processing(argv[1], game->data);
	init_variables_valid(&valid);
	found_tabs(game->data);
	analyze_map_content(game->data, &valid);
	check_map_content(&valid);
	surrounded_by_walls(game->data);
}


