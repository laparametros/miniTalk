/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkuyucu <hkuyucu@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:02:10 by hkuyucu           #+#    #+#             */
/*   Updated: 2022/10/27 17:35:14 by hkuyucu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	desti;

	desti = 0;
	while (dst[desti] != '\0' && desti < size)
		desti++;
	i = desti;
	while (src[desti - i] && desti + 1 < size)
	{
		dst[desti] = src[desti - i];
		desti++;
	}
	if (i < size)
		dst[desti] = '\0';
	return (i + ft_strlen(src));
}
