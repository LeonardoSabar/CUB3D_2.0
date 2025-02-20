/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 00:41:49 by leobarbo          #+#    #+#             */
/*   Updated: 2025/02/20 00:41:49 by leobarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnchr(char *str, char c, int len)
{
	if (len == 1)
	{
		if (*str == c)
			return (0);
	}
	else if (len == 2)
	{
		if (*str == c && *(str + 1) == c)
			return (0);
	}
	else if (len == 3)
	{
		if (*str == c && *(str + 1) == c && *(str + 2) == c)
			return (0);
	}
	return (1);
}
