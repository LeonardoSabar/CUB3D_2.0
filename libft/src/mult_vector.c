/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mult_vector.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 00:43:20 by leobarbo          #+#    #+#             */
/*   Updated: 2025/02/20 00:43:20 by leobarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vector	mult_vector(t_vector v, double scalar)
{
	t_vector	vector;

	vector.x = v.x * scalar;
	vector.y = v.y * scalar;
	return (vector);
}
