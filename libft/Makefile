SOURCES = ft_isalpha.c ft_isdigit.c

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

OBJECTS = $(SOURCES:.c=.o)

all : $(NAME)

$(NAME) : $(OBJECTS)
	$(CC) $(CFLAGS) -o $(NAME) -c $(OBJECTS)

$(OBJECTS) :
	$(CC) $(CFLAGS) -c $(SOURCES)

clean :
	rm $(SOURCES)

.PHONY : all clean
