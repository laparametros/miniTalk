/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkuyucu <hkuyucu@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:33:51 by hkuyucu           #+#    #+#             */
/*   Updated: 2022/10/27 16:41:15 by hkuyucu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*destp;
	char	*srcp;

	if (dest == NULL && src == NULL)
		return (0);
	destp = (char *)dest;
	srcp = (char *)src;
	while (n-- >= 1)
		*destp++ = *srcp++;
	return (dest);
}
