# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbouheni <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 11:04:11 by sbouheni          #+#    #+#              #
#    Updated: 2022/12/11 04:36:04 by sbouheni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES =	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c		\
			ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c 						\
			ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c					\
			ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c					\
			ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c							\
			ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c							\
			ft_split.c ft_itoa.c ft_striteri.c ft_putnbr_fd.c ft_strmapi.c					\

BONUS_SRC =	ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c

NAME =		libft.a

CC =		gcc

CFLAGS =	-Wall -Wextra -Werror

OBJECTS = $(SOURCES:.c=.o)

BONUS_OBJ = $(BONUS_SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

bonus : $(BONUS_OBJ)
	ar rcs $(NAME) $(OBJECTS) $(BONUS_OBJ)

clean :
	rm -f $(OBJECTS) $(BONUS_OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean
