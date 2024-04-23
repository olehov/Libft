/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogrativ <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:35:38 by ogrativ           #+#    #+#             */
/*   Updated: 2024/04/15 15:35:40 by ogrativ          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Prototype:
	void ft_lstiter(t_list *lst, void (*f)(void *));

Parameters:
	lst: The address of a pointer to a node.

	f: The address of the function used to iterate on the list.

Return value:
	None

Description:
	Iterates the list ’lst’ and applies the function
	’f’ on the content of each node.
*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
	{
		return ;
	}
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
