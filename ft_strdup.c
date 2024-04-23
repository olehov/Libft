/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogrativ <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 11:01:18 by ogrativ           #+#    #+#             */
/*   Updated: 2024/04/12 11:18:41 by ogrativ          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
The  strdup() function returns a pointer to a new string which is a
duplicate of the string s. Memory for the new string is obtained with
malloc(3), and can be freed with free(3).
*/
char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*copy;

	size = ft_strlen(s) + 1;
	copy = (char *)malloc((size) * sizeof(char));
	if (copy == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(copy, s, size);
	return (copy);
}
