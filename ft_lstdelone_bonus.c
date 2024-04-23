/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogrativ <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 14:49:10 by ogrativ           #+#    #+#             */
/*   Updated: 2024/04/15 14:49:12 by ogrativ          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
Prototype:
	void ft_lstdelone(t_list *lst, void (*del)(void *));

Parameters:
	lst: The node to free.

	del: The address of the function used to delete the content.

Return value:
	None

Description:
	Takes as a parameter a node and frees the memory of
	the node’s content using the function ’del’ given
	as a parameter and free the node. The memory of
	’next’ must not be freed.
*/
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
	{
		return ;
	}
	(*del)(lst->content);
	free(lst);
}
