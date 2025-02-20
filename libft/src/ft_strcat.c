/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 00:40:12 by leobarbo          #+#    #+#             */
/*   Updated: 2025/02/20 00:40:12 by leobarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strcat(char *dst, const char *src)
{
	size_t	i;
	size_t	size_dst;
	size_t	result;

	i = 0;
	size_dst = ft_strlen(dst);
	while (src[i] && (size_dst + i))
	{
		dst[size_dst + i] = src[i];
		i++;
	}
	dst[size_dst + i] = '\0';
	result = size_dst + ft_strlen(src);
	return (result);
}
