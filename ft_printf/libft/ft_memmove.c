/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkuyucu <hkuyucu@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:38:58 by hkuyucu           #+#    #+#             */
/*   Updated: 2022/10/27 16:37:06 by hkuyucu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s;
	unsigned char	*d;

	if (dst != NULL || src != NULL)
	{
		s = (unsigned char *)src;
		d = (unsigned char *)dst;
		if (d >= s)
		{
			while (len)
			{
				len--;
				d[len] = s[len];
			}
		}
		else
			ft_memcpy(dst, src, len);
	}
	return (dst);
}
