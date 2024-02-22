# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbussier <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/01 10:37:39 by gbussier          #+#    #+#              #
#    Updated: 2023/01/11 16:50:42 by gbussier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRC_c = ft_printf.c ft_put_u.c ft_put_x.c ft_put_xmaj.c ft_put_char.c ft_put_str.c ft_put_nbr.c ft_put_ptr.c
SRC_o = ft_printf.o ft_put_u.o ft_put_x.o ft_put_xmaj.o ft_put_char.o ft_put_str.o ft_put_nbr.o ft_put_ptr.o


all: $(NAME)

$(NAME): convert
	@ar rc $@ $(SRC_o)
	@echo "Processus completion: 100%"

convert:
	@make bonus -C libft
	@cp libft/libft.a .
	@mv libft.a $(NAME)
	@cc -Wall -Wextra -Werror -c $(SRC_c)

fclean: clean
	@rm -f $(NAME)
	@make fclean -C libft

clean:
	@rm -f $(SRC_o) a.out
	@make clean -C libft

re: fclean all
	
compile:
	@cc -Wall -Wextra -Werror main.c -L. -lftprintf -L ./libft -lft
	@./a.out
