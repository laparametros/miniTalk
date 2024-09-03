/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkuyucu <hkuyucu@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:10:14 by hkuyucu           #+#    #+#             */
/*   Updated: 2022/10/27 17:58:20 by hkuyucu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *dizi, unsigned int baslang, size_t len)
{
	size_t	i;
	char	*alandizi;

	if (!dizi)
		return (NULL);
	i = 0;
	alandizi = (char *)malloc(sizeof(char) * (len + 1));
	if (!alandizi)
		return (NULL);
	if (ft_strlen(dizi) > baslang)
	{
		while (dizi[baslang + i] != '\0' && i < len)
		{
			alandizi[i] = dizi[baslang + i];
			i++;
		}
	}
	alandizi[i] = '\0';
	return (alandizi);
}
