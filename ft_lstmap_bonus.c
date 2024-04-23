/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogrativ <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:49:27 by ogrativ           #+#    #+#             */
/*   Updated: 2024/04/16 11:49:31 by ogrativ          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
Prototype:
	t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

Parameters:
	lst: The address of a pointer to a node.

	f: The address of the function used to iterate on the list.

	del: The address of the function used to delete
	the content of a node if needed.

Return value:
	The new list.
	NULL if the allocation fails.

Description:
	Iterates the list ’lst’ and applies the function
	’f’ on the content of each node. Creates a new
	list resulting of the successive applications of
	the function ’f’. The ’del’ function is used to
	delete the content of a node if needed.
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*new;

	if (lst == NULL || f == NULL || del == NULL)
	{
		return (NULL);
	}
	new = NULL;
	while (lst != NULL)
	{
		node = ft_lstnew(f(lst->content));
		if (node == NULL)
		{
			ft_lstclear(&node, del);
			return (NULL);
		}
		ft_lstadd_back(&new, node);
		lst = lst->next;
	}
	return (new);
}
