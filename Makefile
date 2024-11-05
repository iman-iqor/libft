NAME = libft.a
SOURCES = ft_bzero.c      ft_isascii.c    ft_memcmp.c     ft_memset.c     ft_strlen.c     ft_tolower.c\
ft_isalnum.c    ft_isdigit.c    ft_memcpy.c     ft_strchr.c     ft_strncmp.c    ft_toupper.c \
ft_isalpha.c    ft_memchr.c     ft_memmove.c    ft_strlcat.c    ft_strrchr.c ft_strnstr.c
OBJECTS = $(SOURCES:%.c=%.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $@ $(OBJECTS)


clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re