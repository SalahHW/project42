# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/19 06:11:36 by sbouheni          #+#    #+#              #
#    Updated: 2022/12/19 07:26:57 by sbouheni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC =		gcc
CFLAGS =	-Wall -Wextra 
COMPILE =	$(CC) $(CFLAGS)
NAME =		libftprintf.a

TESTFILE =	ft_printf_test.c

SRCDIR =	./src/

SRC =		$(SRCDIR)ft_printf.c 												\
			$(SRCDIR)ft_print_char.c 											\
			$(SRCDIR)ft_print_decimal.c											\
			$(SRCDIR)ft_print_hexadecimal.c										\
			$(SRCDIR)ft_print_integer.c 										\
			$(SRCDIR)ft_print_lower_hexadecimal.c 								\
			$(SRCDIR)ft_print_percent.c											\
			$(SRCDIR)ft_print_string.c 											\
			$(SRCDIR)ft_print_unsigned_decimal.c 								\
			$(SRCDIR)ft_print_upper_hexadecimal.c

OBJ =		$(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean :
	rm -f $(OBJ) 

fclean : clean
	rm -f $(NAME)

test :	$(NAME)
	$(CC) $(TESTFILE) $(NAME)

re : fclean all

.PHONY : all clean
