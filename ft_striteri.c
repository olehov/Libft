/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogrativ <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:08:08 by ogrativ           #+#    #+#             */
/*   Updated: 2024/04/15 11:08:09 by ogrativ          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Prototype:
	void ft_striteri(char *s, void (*f)(unsigned int, char*));

Parameters:
	s: The string on which to iterate.
	
	f: The function to apply to each character.

Return value:
	None

Description:
	Applies the function ’f’ on each character of
	the string passed as argument, passing its index
	as first argument. Each character is passed by
	address to ’f’ to be modified if necessary.
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	unsigned int	size;

	i = 0;
	if (s == NULL)
	{
		return ;
	}
	size = ft_strlen(s);
	while (i < size)
	{
		f(i, &s[i]);
		i++;
	}
	s[size] = '\0';
}
