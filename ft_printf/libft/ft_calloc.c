/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkuyucu <hkuyucu@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:49:21 by hkuyucu           #+#    #+#             */
/*   Updated: 2022/10/27 16:07:43 by hkuyucu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t sayac, size_t size)
{
	void	*a;
	size_t	space;

	space = sayac * size;
	a = malloc(space);
	if (!a)
		return (NULL);
	ft_memset(a, 0, space);
	return (a);
}
