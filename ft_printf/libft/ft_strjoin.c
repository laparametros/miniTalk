/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkuyucu <hkuyucu@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:00:09 by hkuyucu           #+#    #+#             */
/*   Updated: 2022/10/27 17:59:27 by hkuyucu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*birl;
	size_t	i;
	size_t	j;

	if (!s1 && !s2)
		return (NULL);
	birl = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!birl)
		return (NULL);
	j = 0;
	i = 0;
	while (s1[i] != '\0')
	{
		birl[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		birl[i] = s2[j];
		i++;
		j++;
	}
	birl[i] = '\0';
	return (birl);
}
