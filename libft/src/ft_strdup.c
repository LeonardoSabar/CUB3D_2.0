/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 00:40:43 by leobarbo          #+#    #+#             */
/*   Updated: 2025/02/20 00:40:43 by leobarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	size_t	size;
	size_t	i;

	i = 0;
	size = ft_strlen(s);
	dest = ft_calloc((size + 1), sizeof(char));
	if (!dest)
		return (NULL);
	else
	{
		while (s[i] && i < size)
		{
			dest[i] = s[i];
			i++;
		}
	}
	return (dest);
}
