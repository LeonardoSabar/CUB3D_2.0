/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_vector.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 00:35:45 by leobarbo          #+#    #+#             */
/*   Updated: 2025/02/20 00:35:45 by leobarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vector	add_vector(t_vector v1, t_vector v2)
{
	t_vector	vector;

	vector.x = v1 .x + v2.x;
	vector.y = v1.y + v2.y;
	return (vector);
}
