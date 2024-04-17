/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogrativ <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 16:13:03 by ogrativ           #+#    #+#             */
/*   Updated: 2024/04/14 16:13:05 by ogrativ          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>
#include <limits.h>

static int	ft_ismin(int *nb)
{
	if (*nb == -2147483648)
	{
		*nb += 1;
		return (1);
	}
	return (0);
}

static int	ft_size(int n, int sign)
{
	int	size;

	size = 0;
	if (n == 0)
	{
		return (1);
	}
	while (n % 10 != 0)
	{
		size++;
		n /= 10;
	}
	if (sign == -1)
	{
		return (size + 1);
	}
	return (size);
}

static int	ft_sign(int n)
{
	if (n >= 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}

static void	ft_min(char *s, int size, int sign, int ismin)
{
	if (sign == -1)
	{
		if (ismin == 1)
		{
			s[size - 1] += 1;
		}
		s[0] = '-';
	}
}

/*
Convert number from integer to character
sign included
*/
char	*ft_itoa(int n)
{
	char	*number;
	int		sign;
	int		size;
	int		size2;
	int		ismin;

	sign = ft_sign(n);
	ismin = ft_ismin(&n);
	size = ft_size(n, sign);
	n *= sign;
	size2 = size;
	number = (char *)malloc(sizeof(char) * (size + 1));
	if (number == NULL)
		return (NULL);
	if (n == 0)
		number[0] = n + '0';
	while (n % 10 != 0)
	{
		number[--size] = (n % 10) + '0';
		n /= 10;
	}
	ft_min(number, size2, sign, ismin);
	number[size2] = '\0';
	return (number);
}

int main()
{
    int num1 = -1;
    int num2 = 1;

    printf("Testing ft_itoa function:\n");

    printf("Integer: %d\n", num1);
    printf(" Result: %s\n", ft_itoa(num1));

    printf("Integer: %d\n", num2);
    printf(" Result: %s\n", ft_itoa(num2));

    return 0;
}