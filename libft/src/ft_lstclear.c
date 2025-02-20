/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 00:37:35 by leobarbo          #+#    #+#             */
/*   Updated: 2025/02/20 00:37:35 by leobarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*aux;
	t_list	*curr;

	curr = *lst;
	if (!lst || !del || !(*lst))
		return ;
	while (curr != NULL)
	{
		aux = curr;
		curr = curr->next;
		ft_lstdelone(aux, del);
	}
	*lst = NULL;
}
