/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 00:36:29 by leobarbo          #+#    #+#             */
/*   Updated: 2025/02/20 00:36:29 by leobarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*memory;
	size_t	total_size;

	total_size = nmemb * size;
	if (total_size != 0 && total_size / nmemb != size)
		return (NULL);
	memory = malloc(total_size);
	if (memory != NULL)
		ft_bzero(memory, total_size);
	return (memory);
}
