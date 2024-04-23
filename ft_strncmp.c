/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogrativ <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:39:56 by ogrativ           #+#    #+#             */
/*   Updated: 2024/04/12 11:11:51 by ogrativ          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
The  strcmp()  function compares the two strings s1 and s2.  The locale
is not taken into account (for  a  locale-aware  comparison,  see  str‐
coll(3)).  The comparison is done using unsigned characters.

strcmp() returns an integer indicating the result of the comparison, as
follows:

• 0, if the s1 and s2 are equal;

• a negative value if s1 is less than s2;

• a positive value if s1 is greater than s2.

The strncmp() function is similar, except it compares  only  the  first
(at most) n bytes of s1 and s2.
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] < s2[i] || s1[i] > s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
