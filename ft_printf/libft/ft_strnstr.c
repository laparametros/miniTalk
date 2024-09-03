/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkuyucu <hkuyucu@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:06:43 by hkuyucu           #+#    #+#             */
/*   Updated: 2022/10/27 17:15:29 by hkuyucu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t uzu)
{
	size_t	i;
	size_t	j;
	char	*s;

	i = 0;
	s = (char *) big;
	if (!ft_strlen(s) && !ft_strlen(little) && uzu == 0)
		return (s);
	if (!ft_strlen(little))
		return (s);
	while (i < uzu && s[i])
	{
		j = 0;
		while (s[i + j] == little[j])
		{
			if (little[j + 1] == '\0' && (i + j) < uzu)
				return (&s[i]);
			j++;
		}
		i++;
	}
	return (0);
}
