/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkuyucu <hkuyucu@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 15:12:21 by hkuyucu           #+#    #+#             */
/*   Updated: 2022/10/27 12:54:42 by hkuyucu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	m;

	m = 0;
	while (lst)
	{
		m++;
		lst = lst->next;
	}
	return (m);
}
