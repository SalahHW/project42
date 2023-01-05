# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/19 06:11:36 by sbouheni          #+#    #+#              #
#    Updated: 2023/01/05 20:04:12 by sbouheni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC =		gcc
CFLAGS =	-Wall -Wextra -Iinclude -g#-Werror
COMPILE =	$(CC) $(CFLAGS)
NAME =		libftprintf.a
LIBNAME =	libft.a

TESTFILE =	ft_printf_test.c

SRC_DIR =		./src/
INCLUDE_DIR =	./include/
LIBFT_DIR = 	./libft/
OBJ_DIR =		./obj/

SRC = 	$(SRC_DIR)ft_printf.c 							\
		$(SRC_DIR)ft_print_char.c 						\
		$(SRC_DIR)ft_print_hexadecimal.c				\
		$(SRC_DIR)ft_print_integer.c \
		$(SRC_DIR)ft_print_lower_hexadecimal.c \
		$(SRC_DIR)ft_print_percent.c \
		$(SRC_DIR)ft_print_string.c \
		$(SRC_DIR)ft_print_unsigned_decimal.c \
		$(SRC_DIR)ft_print_upper_hexadecimal.c	\
		$(SRC_DIR)ft_unsigned_itoa.c

OBJ =	$(SRC:$(SRC_DIR)%.c=$(OBJ_DIR)%.o)

all : $(NAME)

$(NAME) : $(OBJ)
	make -C libft
	cp libft/libft.a .
	mv libft.a $(NAME)
	ar rcs $(NAME) $(OBJ)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	mkdir -p $(OBJ_DIR)
	$(COMPILE) -c -o $@ $<

clean :
	rm -rf $(OBJ_DIR) 
	cd $(LIBFT_DIR) && $(MAKE) $@

fclean : clean
	rm -f $(NAME)
	cd $(LIBFT_DIR) && $(MAKE) $@

test :	$(NAME) $(TESTFILE)
	$(COMPILE) -o test $(TESTFILE) -L. -lftprintf

re : fclean all

.PHONY : libft
