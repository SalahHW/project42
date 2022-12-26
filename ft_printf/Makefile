# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/19 06:11:36 by sbouheni          #+#    #+#              #
#    Updated: 2022/12/25 11:57:24 by sbouheni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC =		gcc
CFLAGS =	-Wall -Wextra -Iinclude -Werror
COMPILE =	$(CC) $(CFLAGS)
NAME =		libftprintf.a
LIBNAME =	libft.a

TESTFILE =	ft_printf_test.c

SRC_DIR =		./src/
INCLUDE_DIR =	./include/
LIBFT_DIR = 	./libft/
OBJ_DIR =		./obj/

SRC =	$(SRC_DIR)ft_printf.c 													\
		$(SRC_DIR)ft_print_char.c 												\
		$(SRC_DIR)ft_print_hexadecimal.c										\
		$(SRC_DIR)ft_print_integer.c 											\
		$(SRC_DIR)ft_print_lower_hexadecimal.c 									\
		$(SRC_DIR)ft_print_percent.c											\
		$(SRC_DIR)ft_print_string.c 											\
		$(SRC_DIR)ft_print_unsigned_decimal.c 									\
		$(SRC_DIR)ft_print_upper_hexadecimal.c

OBJ =	$(SRC:.c=.o)

all : $(NAME)

$(NAME) : libft $(OBJ)
	ar rcs $(NAME) $(OBJ) $(LIBFT_DIR)$(LIBNAME)
	cd $(SRC_DIR) && mv $(NAME) ../

clean :
	rm -f $(OBJ) 
	cd $(LIBFT_DIR) && $(MAKE) $@

fclean : clean
	rm -f $(NAME)
	cd $(LIBFT_DIR) && $(MAKE) $@

libft :
	cd $(LIBFT_DIR) && $(MAKE) && cp $(LIBNAME) ../
	

test :	$(NAME)
	$(CC) -g $(TESTFILE) $(NAME) $(LIBFT_DIR)$(LIBNAME)

re : fclean all

.PHONY : test libft
