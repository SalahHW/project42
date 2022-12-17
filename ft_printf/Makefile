# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbouheni <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 11:04:11 by sbouheni          #+#    #+#              #
#    Updated: 2022/12/17 16:26:11 by sbouheni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		libftprintf.a	

SOURCES =	ft_printf.c	

OBJECTS = $(SOURCES:.c=.o)

CC =		gcc

CFLAGS =	-Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

clean :
	rm -f $(OBJECTS) 

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean
