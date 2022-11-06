SOURCES = ft_isalpha.c ft_isdigit.c

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror -c

OBJECTS = $(SOURCES:.c=.o)

all : $(NAME)

$(NAME) : $(OBJECTS)
	$(CC) $(CFLAGS) $(NAME)

$(OBJECTS) :
	$(CC) $(CFLAGS) $(SOURCES)
