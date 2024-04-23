/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogrativ <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:23:28 by ogrativ           #+#    #+#             */
/*   Updated: 2024/04/15 11:23:30 by ogrativ          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/*
Prototype:
	void ft_putstr_fd(char *s, int fd);

Parameters:
	s: The string to output.
	
	fd: The file descriptor on which to write.

Return value:
	None

Description:
	Outputs the string ’s’ to the given file descriptor.
*/
void	ft_putstr_fd(char *s, int fd)
{
	size_t	size;

	if (s == NULL)
	{
		return ;
	}
	size = ft_strlen(s);
	write(fd, s, size);
}
