/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogrativ <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:19:13 by ogrativ           #+#    #+#             */
/*   Updated: 2024/04/15 15:19:15 by ogrativ          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
Prototype:
	void ft_lstclear(t_list **lst, void (*del)(void *));

Parameters:
	lst: The address of a pointer to a node.

	del: The address of the function used to delete the content of the node.

Return value:
	None

Description:
	Deletes and frees the given node and every
	successor of that node, using the function ’del’
	and free(3).
	Finally, the pointer to the list must be set to	NULL.
*/
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	if (lst == NULL || del == NULL)
	{
		return ;
	}
	while (lst != NULL && *lst != NULL)
	{
		next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next;
	}
}
