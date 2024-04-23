/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogrativ <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 10:49:55 by ogrativ           #+#    #+#             */
/*   Updated: 2024/04/15 10:49:59 by ogrativ          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
Prototype:
	char *ft_strmapi(char const *s, char (*f)(unsigned int, char));

Parameters:
	s: The string on which to iterate.

	f: The function to apply to each character.

Return value:
	The string created from the successive applications of ’f’.
	Returns NULL if the allocation fails.

Description:
	Applies the function f to each character of the
	string s, passing its index as the first argument
	and the character itself as the second. A new
	string is created (using malloc(3)) to collect the
	results from the successive applications of f.
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	size;
	char			*str;

	i = 0;
	if (s == NULL)
	{
		return (NULL);
	}
	size = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[size] = '\0';
	return (str);
}
