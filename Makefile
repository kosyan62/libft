# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgena <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/05 15:35:59 by mgena             #+#    #+#              #
#    Updated: 2019/09/05 17:02:37 by mgena            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
CFILE=*.c
OFILE=*.o
FLAGS=-Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -I/libft.h -c $(CFILE)
	ar -rv $(NAME) $(OFILE)
	ranlib $(NAME)

clean: 
	rm -f $(OFILE)

fclean: clean
	rm -f $(NAME)

re: fclean all
