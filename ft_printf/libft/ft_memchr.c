/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkuyucu <hkuyucu@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:30:41 by hkuyucu           #+#    #+#             */
/*   Updated: 2022/10/20 16:30:41 by hkuyucu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*dizin;
	unsigned char	karakter;

	dizin = (unsigned char *)s;
	karakter = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*dizin == karakter)
			return (dizin);
		dizin++;
		i++;
	}
	return (NULL);
}
