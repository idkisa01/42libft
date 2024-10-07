# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/06 18:28:36 by marvin            #+#    #+#              #
#    Updated: 2024/10/06 18:28:36 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME	= libft.a
RM		= rm -f
CC		= cc
CCFLAGS = -Wall -Werror -Wextra
LIB		= ar rcs
SRC		= $(wildcard *.c)
OBJ		= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		$(LIB) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: clean fclean all

.PHONY: all fclean clean re