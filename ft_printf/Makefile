# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/19 06:11:36 by sbouheni          #+#    #+#              #
#    Updated: 2022/12/20 17:44:14 by sbouheni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC =		gcc
CFLAGS =	-Wall -Wextra -Iinclude#-Werror
COMPILE =	$(CC) $(CFLAGS)
NAME =		libftprintf.a

TESTFILE =	ft_printf_test.c

SRC_DIR =		./src/
INCLUDE_DIR =	./include/
LIBFT_DIR = 	./libft/

SRC =	$(SRC_DIR)ft_printf.c 													\
		$(SRC_DIR)ft_print_char.c 												\
		$(SRC_DIR)ft_print_decimal.c											\
		$(SRC_DIR)ft_print_hexadecimal.c										\
		$(SRC_DIR)ft_print_integer.c 											\
		$(SRC_DIR)ft_print_lower_hexadecimal.c 									\
		$(SRC_DIR)ft_print_percent.c											\
		$(SRC_DIR)ft_print_string.c 											\
		$(SRC_DIR)ft_print_unsigned_decimal.c 									\
		$(SRC_DIR)ft_print_upper_hexadecimal.c

OBJ =	$(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ) libft
	ar rcs $(NAME) $(OBJ)

clean :
	rm -f $(OBJ) 
	cd $(LIBFT_DIR) && $(MAKE) $@

fclean : clean
	rm -f $(NAME)
	cd $(LIBFT_DIR) && $(MAKE) $@

libft :
	cd $(LIBFT_DIR) && $(MAKE)

test :	$(NAME)
	$(CC) $(TESTFILE) $(NAME) libft/libft.a

re : fclean all

.PHONY : test libft
