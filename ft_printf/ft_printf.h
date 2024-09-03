/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkuyucu <hkuyucu@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 18:51:36 by hkuyucu           #+#    #+#             */
/*   Updated: 2023/03/30 18:51:36 by hkuyucu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"

char	*ft_uitoa(unsigned int n);
char	*ft_hexitoa(unsigned long n, char cha);
int		ft_printf(const char *s, ...);

#endif
