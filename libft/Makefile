# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbouheni <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 11:04:11 by sbouheni          #+#    #+#              #
#    Updated: 2022/11/07 17:52:44 by sbouheni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror -c

OBJECTS = $(SOURCES:.c=.o)

all : $(NAME)

$(NAME) : $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

clean :
	rm $(OBJECTS)

fclean : clean
	rm $(NAME)

re : fclean all

.PHONY : all clean
