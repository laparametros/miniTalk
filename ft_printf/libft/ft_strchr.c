/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkuyucu <hkuyucu@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:55:26 by hkuyucu           #+#    #+#             */
/*   Updated: 2022/10/20 17:55:26 by hkuyucu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	mesaj;
	char	*dizi;

	mesaj = (char) c;
	dizi = (char *) s;
	i = 0;
	while (dizi[i] != '\0' && dizi[i] != mesaj)
		i++;
	if (dizi[i] == mesaj)
		return (dizi + i);
	return (NULL);
}
