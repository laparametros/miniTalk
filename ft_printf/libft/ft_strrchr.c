/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkuyucu <hkuyucu@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:08:14 by hkuyucu           #+#    #+#             */
/*   Updated: 2022/10/20 18:08:14 by hkuyucu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	sboy;

	sboy = ft_strlen(s);
	while (sboy != 0 && *(s + sboy) != c)
		sboy--;
	if (*(s + sboy) == c)
		return ((char *)(s + sboy));
	return (0);
}
