# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmura <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/14 16:29:13 by gmura             #+#    #+#              #
#    Updated: 2017/12/21 11:38:25 by gmura            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Wextra -Werror -c -Iincludes
SRC = ./*.c
OBJ = ./*.o

all: $(NAME)

$(NAME):
	@gcc $(CFLAGS) $(SRC)
	@ar rc $(NAME) $(OBJ)
	ranlib libft.a

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
