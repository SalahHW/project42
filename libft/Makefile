# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbouheni <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 11:04:11 by sbouheni          #+#    #+#              #
#    Updated: 2022/11/07 13:40:36 by sbouheni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = ft_isalpha.c ft_isdigit.c

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror -c

OBJECTS = $(SOURCES:.c=.o)

all : $(NAME)

$(NAME) : $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)

$(OBJECTS) :
	$(CC) $(CFLAGS) $(SOURCES)

clean : $(OBJECTS)
	rm $(OBJECTS)

fclean : $(NAME) clean
	rm $(NAME)

.PHONY : all clean
