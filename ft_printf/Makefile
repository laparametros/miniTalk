# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hkuyucu <hkuyucu@student.42kocaeli.com.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/30 18:52:24 by hkuyucu           #+#    #+#              #
#    Updated: 2023/03/30 18:52:24 by hkuyucu          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = "libftprintf.a"

FILES = ft_hexitoa.c	ft_printf.c	ft_uitoa.c

OBJECTS = ft_hexitoa.o	ft_printf.o	ft_uitoa.o

all:
	@gcc -c -Wall -Wextra -Werror $(FILES)
	@cd libft && make all
	@ar rcs $(NAME) $(OBJECTS) libft/*.o
	
clean:
	@rm -f $(OBJECTS)
	@cd libft && make clean

fclean: clean
	@rm -f $(NAME)
	@cd libft && make fclean

re: fclean all
