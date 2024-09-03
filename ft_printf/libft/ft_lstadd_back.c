/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkuyucu <hkuyucu@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:15:53 by hkuyucu           #+#    #+#             */
/*   Updated: 2022/10/27 16:27:46 by hkuyucu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tsl;

	tsl = *lst;
	if (!tsl)
	{
		*lst = new;
		return ;
	}
	tsl = ft_lstlast(tsl);
	tsl->next = new;
}
