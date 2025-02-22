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
	if (argc != 2)
	{
		printf(RED WARNING_ARGS RST);
		free_memory(get_game(NULL));
		exit(EXIT_FAILURE);
	}
	else
		return ;
}

void	check_extension(char *map_file)
{
	char	*extension;
	int		i;
	int		len;

	i = 0;
	extension = ".cub";
	len = ft_strlen(map_file);
	len = len - 4;
	while (map_file[len] && extension[i] && map_file[len] == extension[i])
	{
		i++;
		len++;
	}
	if (extension[i] == '\0')
		return ;
	handle_error(WARNING_EXT);
	exit(EXIT_FAILURE);
}

static void extension_path(char *path)
{
	char	*extension;
	int		i;
	int		len;
	
	i = 0;
	extension = ".png";
	len = ft_strlen(path);
	len = len - 4;
	while (path[len] && extension[i] && path[len] == extension[i])
	{
		i++;
		len++;
	}
	if (extension[i] == '\0')
	return ;
	handle_error("Error: invalid texture path.\n");
}

int	check_path(char *path)
{
	int	fd;

	extension_path(path);
	fd = open(path, O_RDONLY);
	if (fd == -1)
		return (0);
	close(fd);
	return (1);
}