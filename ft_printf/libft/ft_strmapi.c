/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkuyucu <hkuyucu@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:04:39 by hkuyucu           #+#    #+#             */
/*   Updated: 2022/10/20 18:04:39 by hkuyucu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*dizi;

	dizi = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (!dizi)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		dizi[i] = f(i, s[i]);
		i++;
	}
	dizi[i] = '\0';
	return (dizi);
}
