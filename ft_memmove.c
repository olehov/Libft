/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogrativ <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 10:58:27 by ogrativ           #+#    #+#             */
/*   Updated: 2024/04/12 11:10:16 by ogrativ          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_memmove_last(void *dest, const void *src, size_t n)
{
	const char	*lasts;
	char		*lastd;

	lasts = (const char *)src + (n - 1);
	lastd = (char *)dest + (n - 1);
	while (n--)
	{
		*lastd-- = *lasts--;
	}
}

static void	ft_memmove_first(void *dest, const void *src, size_t n)
{
	const char	*firsts;
	char		*firstd;

	firsts = (const char *)src;
	firstd = (char *)dest;
	while (n--)
	{
		*firstd++ = *firsts++;
	}
}

/*
The  memmove()  function  copies n bytes from memory area src to memory
area dest.  The memory areas may overlap: copying takes place as though
the  bytes in src are first copied into a temporary array that does not
overlap src or dest, and the bytes are then copied from  the  temporary
 array to dest.
*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest < src)
	{
		ft_memmove_first(dest, src, n);
	}
	else
	{
		ft_memmove_last(dest, src, n);
	}
	return (dest);
}
