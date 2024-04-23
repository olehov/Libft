/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogrativ <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:32:22 by ogrativ           #+#    #+#             */
/*   Updated: 2024/04/15 11:32:23 by ogrativ          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Prototype:
	void ft_putendl_fd(char *s, int fd);

Parameters:
	s: The string to output.
	
	fd: The file descriptor on which to write.

Return value:
	None

Description:
	Outputs the string ’s’ to the given file descriptor
	followed by a newline.
*/
void	ft_putendl_fd(char *s, int fd)
{
	if (s == NULL)
	{
		return ;
	}
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
