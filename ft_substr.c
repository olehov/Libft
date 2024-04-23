/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogrativ <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 11:23:23 by ogrativ           #+#    #+#             */
/*   Updated: 2024/04/12 11:23:24 by ogrativ          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*ft_nullterminate(char *s)
{
	if (s == NULL)
	{
		return (NULL);
	}
	s[0] = '\0';
	return (s);
}

static size_t	ft_size(size_t len, size_t slen, size_t start)
{
	size_t	finish;

	finish = 0;
	if (start < slen)
	{
		finish = slen - start;
	}
	if (finish > len)
	{
		finish = len;
	}
	return (finish);
}

/*
Prototype:
char *ft_substr(char const *s, unsigned int start, size_t len);

Parameters:
	s: The string from which to create the substring.
	
	start: The start index of the substring in the string ’s’.
	
	len: The maximum length of the substring.

Return value:
	The substring. NULL if the allocation fails.

Description:
	Allocates (with malloc(3)) and returns a substring
	from the string ’s’.
	The substring begins at index ’start’ and is of
	maximum size ’len’.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	slen;
	size_t	finish;

	slen = ft_strlen(s);
	if (s == NULL || start >= slen)
	{
		new = (char *)malloc(1);
		return (ft_nullterminate(new));
	}
	finish = ft_size(len, slen, start);
	new = (char *)malloc(sizeof(char) * (finish + 1));
	if (new == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(new, s + start, finish + 1);
	return (new);
}
