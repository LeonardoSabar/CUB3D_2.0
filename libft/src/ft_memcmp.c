/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 00:39:01 by leobarbo          #+#    #+#             */
/*   Updated: 2025/02/20 00:39:01 by leobarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int		i;
	unsigned const char	*p1;
	unsigned const char	*p2;

	p1 = s1;
	p2 = s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < (n - 1) && p1[i] == p2[i])
	{
		i++;
	}
	return (p1[i] - p2[i]);
}
