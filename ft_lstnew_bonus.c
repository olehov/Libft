/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogrativ <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:59:16 by ogrativ           #+#    #+#             */
/*   Updated: 2024/04/15 12:59:18 by ogrativ          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
Prototype:
	t_list *ft_lstnew(void *content);

Parameters:
	content: The content to create the node with.

Return value:
	The new node

Description:
	Allocates (with malloc(3)) and returns a new node.
	The member variable ’content’ is initialized with
	the value of the parameter ’content’. The variable
	’next’ is initialized to NULL.
*/
t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (node == NULL)
	{
		return (NULL);
	}
	node->content = content;
	node->next = NULL;
	return (node);
}
