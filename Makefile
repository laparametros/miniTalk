# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hkuyucu <hkuyucu@student.42kocaeli.com.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/30 18:52:53 by hkuyucu           #+#    #+#              #
#    Updated: 2023/03/30 18:52:53 by hkuyucu          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


all:
	@cd ft_printf && make all
	@gcc -Wall -Wextra -Werror src/server.c ft_printf/libftprintf.a -o server
	@gcc -Wall -Wextra -Werror src/client.c ft_printf/libftprintf.a -o client

clean:
	@cd ft_printf && make clean
	@rm -f server
	@rm -f client

fclean: clean
	@cd ft_printf && make fclean

re: fclean all

bonus: fclean
	@cd ft_printf && make all
	@gcc -Wall -Wextra -Werror "bonus src/server_bonus.c" ft_printf/libftprintf.a -o server
	@gcc -Wall -Wextra -Werror "bonus src/client_bonus.c" ft_printf/libftprintf.a -o client
