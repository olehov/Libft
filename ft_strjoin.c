/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogrativ <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 11:19:07 by ogrativ           #+#    #+#             */
/*   Updated: 2024/04/12 11:20:55 by ogrativ          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
Prototype:
	char *ft_strjoin(char const *s1, char const *s2);

Parameters:
	s1: The prefix string.
	
	s2: The suffix string.

Return value:
	The new string. NULL if the allocation fails.

Description:
	Allocates (with malloc(3)) and returns a new
	string, which is the result of the concatenation
	of ’s1’ and ’s2’.
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		sizes1;
	int		sizes2;
	int		totalsize;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	sizes1 = ft_strlen(s1);
	sizes2 = ft_strlen(s2);
	totalsize = sizes1 + sizes2;
	res = (char *)malloc(sizeof(char) * totalsize + 1);
	if (res == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(res, s1, sizes1 + 1);
	ft_strlcat(res, s2, (totalsize + 1));
	return (res);
}
