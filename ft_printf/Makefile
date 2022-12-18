# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbouheni <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 11:04:11 by sbouheni          #+#    #+#              #
#    Updated: 2022/12/18 21:26:20 by sbouheni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC =		gcc
CFLAGS =	-Wall -Wextra -Werror
COMPILE =	$(CC) $(CFLAGS)
NAME =		libftprintf.a

SRCDIR =	./src/

SRC =		ft_printf.c ft_print_char.c ft_print_hexadecimal.c					\
			ft_print_integer.c ft_print_lower_hexadecimal.c ft_print_percent.c	\
			ft_print_string.c ft_print_unsigned_decimal.c 						\
			ft_print_upper_hexadecimal.c

OBJ =		$(SRCDIR)$(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(SRCDIR)$(OBJ)

clean :
	rm -f $(OBJ) 

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean
