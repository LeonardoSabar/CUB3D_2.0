/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 00:45:59 by leobarbo          #+#    #+#             */
/*   Updated: 2025/02/20 12:19:29 by leobarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub.h"

int	main(int argc, char **argv)
{
	t_cub	game;

	init(&game);
	parsing(argc, argv, &game);
	printf("PARSSING OK\n");
	init_game(&game);
	return (EXIT_SUCCESS);
}


