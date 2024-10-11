# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   Makefile                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   By: isabegar <isabegar@student.42.fr>          #+#  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2024-10-07 11:06:57 by isabegar          #+#    #+#             #
#   Updated: 2024-10-07 11:06:57 by isabegar         ###   ########.fr       #
#                                                                            #
# ************************************************************************** #

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

