/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_vector.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 00:35:58 by leobarbo          #+#    #+#             */
/*   Updated: 2025/02/20 00:35:58 by leobarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vector	copy_vector(t_vector v)
{
	t_vector	vector;

	vector.x = v.x;
	vector.y = v.y;
	return (vector);
}
