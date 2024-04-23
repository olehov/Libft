/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogrativ <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:17:01 by ogrativ           #+#    #+#             */
/*   Updated: 2024/04/15 11:17:05 by ogrativ          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/*
Prototype:
	void ft_putchar_fd(char c, int fd);

Parameters:
	c: The character to output.
	
	fd: The file descriptor on which to write.

Return value:
	None

Description:
	Outputs the character ’c’ to the given file descriptor.
*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
