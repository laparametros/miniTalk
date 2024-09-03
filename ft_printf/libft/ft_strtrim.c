/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkuyucu <hkuyucu@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:09:04 by hkuyucu           #+#    #+#             */
/*   Updated: 2022/10/27 17:50:22 by hkuyucu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (s1)
	{
		if (!set)
			return ((char *)s1);
		end = ft_strlen(s1);
		if (end < 1)
			return (ft_strdup(""));
		start = 0;
		while (s1[start] && ft_strchr(set, s1[start]))
			start++;
		while (start < end && ft_strchr(set, s1[end - 1]))
			end--;
		return (ft_substr(s1, start, end - start));
	}
	return (NULL);
}
