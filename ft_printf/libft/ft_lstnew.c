/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkuyucu <hkuyucu@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:29:21 by hkuyucu           #+#    #+#             */
/*   Updated: 2022/10/20 16:29:21 by hkuyucu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*yeni;

	yeni = malloc(sizeof(t_list));
	if (!yeni)
		return (yeni);
	(*yeni).content = content;
	(*yeni).next = (t_list *)(void *)0;
	return (yeni);
}
