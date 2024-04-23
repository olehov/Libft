/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogrativ <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 13:11:46 by ogrativ           #+#    #+#             */
/*   Updated: 2024/04/15 13:11:52 by ogrativ          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Prototype:
	int ft_lstsize(t_list *lst);

Parameters:
	lst: The beginning of the list.

Return value:
	The length of the list

Description:
	Counts the number of nodes in a list.
*/
int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*node;

	i = 0;
	if (lst == NULL)
	{
		return (0);
	}
	node = lst;
	while (node != NULL)
	{
		i++;
		node = node->next;
	}
	return (i);
}
