/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexitoa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkuyucu <hkuyucu@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 18:50:54 by hkuyucu           #+#    #+#             */
/*   Updated: 2023/03/30 18:50:54 by hkuyucu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

static char	ft_hexdigit(unsigned long n, char c)
{
	if (c == 'X')
		return ('A' + n - 10);
	else
		return ('a' + n - 10);
}

static int	ft_get_size(unsigned long n)
{
	int	size;

	size = 1;
	while (n / 16 != 0)
	{
		size++;
		n /= 16;
	}
	return (size);
}

char	*ft_hexitoa(unsigned long n, char cha)
{
	char	*c;
	int		size;
	int		i;

	size = ft_get_size(n);
	c = malloc(size + 1);
	if (c == NULL)
		return (NULL);
	c[size] = '\0';
	if (n == 0)
		c[0] = '0';
	i = 1;
	while (i < size + 1 && n != 0)
	{
		c[size - i] = n % 16 + '0';
		if (n % 16 > 9)
			c[size - i] = ft_hexdigit(n % 16, cha);
		n /= 16;
		i++;
	}
	return (c);
}
