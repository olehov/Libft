/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogrativ <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 11:08:27 by ogrativ           #+#    #+#             */
/*   Updated: 2024/04/12 11:12:04 by ogrativ          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The strnstr() function locates the first occurrence of the
null-terminated string little in the string big, where not more
than len characters are searched. Characters that appear after a
‘\0’ character are not searched. Since the strnstr() function is a
FreeBSD specific API, it should only be used when portability is not a concern.
*/
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
	{
		return ((char *)&big[i]);
	}
	while (i < len && big[i] != '\0')
	{
		j = 0;
		while (big[i + j] != '\0' && big[i + j] == little[j] && i + j < len)
		{
			if (little[j + 1] == '\0')
			{
				return ((char *)&big[i]);
			}
			++j;
		}
		++i;
	}
	return (0);
}
