/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 00:40:59 by leobarbo          #+#    #+#             */
/*   Updated: 2025/02/20 00:40:59 by leobarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	i;
	size_t	size_s1;
	size_t	size_s2;

	i = 0;
	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	dest = ft_calloc((size_s1 + size_s2 + 1), sizeof(char));
	if (!dest)
		return (NULL);
	ft_memcpy(dest, s1, size_s1);
	while (s2[i])
	{
		dest[size_s1 + i] = s2[i];
		i++;
	}
	return (dest);
}
