/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogrativ <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 13:30:06 by ogrativ           #+#    #+#             */
/*   Updated: 2024/04/15 13:30:09 by ogrativ          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Prototype:
	void ft_lstadd_back(t_list **lst, t_list *new);

Parameters:
	lst: The address of a pointer to the first link of a list.

	new: The address of a pointer to the node to be added to the list.

Return value:
	None

Description:
	Adds the node ’new’ at the end of the list.
*/
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
	{
		return ;
	}
	if (*lst != NULL)
	{
		ft_lstlast(*lst)->next = new;
	}
	else
	{
		*lst = new;
	}
}
