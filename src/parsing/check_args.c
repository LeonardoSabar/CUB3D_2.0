/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 00:48:28 by leobarbo          #+#    #+#             */
/*   Updated: 2025/02/20 00:48:28 by leobarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub.h"

void	check_arguments(int argc)
{
	if (argc < 2)
	{
		printf(WARNING_ARGS_1);
		free_memory(get_game(NULL));
		exit(EXIT_FAILURE);
	}
	else if (argc > 2)
	{
		printf(WARNING_ARGS_2);
		free_memory(get_game(NULL));
		exit(EXIT_FAILURE);
	}
	else
		return ;
}

void	check_extension(char *map_file)
{
	char	*dotcub;
	int		i;
	int		len;

	i = 0;
	dotcub = ".cub";
	len = ft_strlen(map_file);
	len = len - 4;
	while (map_file[len] && dotcub[i] && map_file[len] == dotcub[i])
	{
		i++;
		len++;
	}
	if (dotcub[i] == '\0')
		return ;
	handle_error(WARNING_EXT);
	exit(EXIT_FAILURE);
}

int	check_path(char *path)
{
	int	fd;

	fd = open(path, O_RDONLY);
	if (fd == -1)
		return (0);
	close(fd);
	return (1);
}