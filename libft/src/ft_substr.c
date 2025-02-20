/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 00:42:35 by leobarbo          #+#    #+#             */
/*   Updated: 2025/02/20 00:42:35 by leobarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;
	size_t	size;

	i = 0;
	size = ft_strlen(s);
	if (start > size)
		return (ft_strdup(""));
	if (len > (size - start))
		len = size - start;
	dest = ft_calloc((len + 1), sizeof(char));
	if (!dest)
		return (NULL);
	while (s[start + i] && i < len)
	{
		dest[i] = s[start + i];
		i++;
	}
	return (dest);
}
