# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbussier <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/01 10:37:39 by gbussier          #+#    #+#              #
#    Updated: 2022/12/19 16:52:44 by gbussier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC_c = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memcmp.c ft_memmove.c ft_memchr.c ft_strlcpy.c ft_strlcat.c ft_atoi.c ft_strdup.c ft_calloc.c ft_strncmp.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c ft_split.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_strmapi.c ft_striteri.c
SRC_o = ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o  ft_strlen.o ft_memset.o ft_bzero.o ft_memcpy.o ft_memcmp.o ft_memmove.o ft_memchr.o ft_strlcpy.o ft_strlcat.o ft_atoi.o ft_strdup.o ft_calloc.o ft_strncmp.o ft_toupper.o ft_tolower.o ft_strchr.o ft_strrchr.o ft_strnstr.o ft_itoa.o ft_putchar_fd.o ft_putstr_fd.o ft_putnbr_fd.o ft_putendl_fd.o ft_split.o ft_substr.o ft_strjoin.o ft_strtrim.o ft_strmapi.o ft_striteri.o
BONUS_c = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
BONUS_o = ft_lstnew_bonus.o ft_lstadd_front_bonus.o ft_lstsize_bonus.o ft_lstlast_bonus.o ft_lstadd_back_bonus.o ft_lstdelone_bonus.o ft_lstclear_bonus.o ft_lstiter_bonus.o ft_lstmap_bonus.o


all: $(NAME)

$(NAME): convert
	@ar rc $(NAME) $(SRC_o)
	@echo "Processus completion: 100%"

convert:
	@cc -Wall -Wextra -Werror -c $(SRC_c)

convert_bonus:
	@cc -Wall -Wextra -Werror -c $(SRC_c) $(BONUS_c)

fclean: clean
	@rm -f $(NAME)

clean:
	@rm -f $(SRC_o) $(BONUS_o) a.out

re: fclean all

bonus: convert_bonus
	@ar rc $(NAME) $(SRC_o) $(BONUS_o)	
	@echo "Processus completion with bonus: 100%"
	
compile:
	@cc -Wall -Wextra -Werror main.c -L. -lft
	@echo "the result is: "
	@./a.out
