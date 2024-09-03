/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkuyucu <hkuyucu@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 13:07:39 by hkuyucu           #+#    #+#             */
/*   Updated: 2022/10/20 13:07:39 by hkuyucu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	eksi;
	int	yeni;

	i = 0;
	eksi = 1;
	yeni = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			eksi *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		yeni = (str[i] - '0') + (yeni * 10);
		i++;
	}
	return (yeni * eksi);
}
