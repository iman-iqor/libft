SRC = ft_atoi.c       ft_memcpy.c     ft_strlen.c\
ft_bzero.c      ft_memmove.c    ft_strmapi.c\
ft_calloc.c     ft_memset.c     ft_strncmp.c\
ft_isalnum.c    ft_putchar_fd.c ft_strnstr.c\
ft_isalpha.c    ft_split.c      ft_strrchr.c\
ft_isascii.c    ft_strchr.c     ft_strtrim.c\
ft_isdigit.c    ft_strdup.c     ft_substr.c\
ft_isprint.c    ft_striteri.c   ft_tolower.c\
ft_itoa.c       ft_strjoin.c    ft_toupper.c\
ft_memchr.c     ft_strlcat.c\
ft_memcmp.c     ft_strlcpy.c

OBJ = ${SRC:%.c=%.o}

NAME = libft.a

AR = ar rc

CC = cc -Wall -Wextra -Werror

all:build
	$(AR) $(NAME) $(OBJ)

build:$(SRC)
	$(CC) -c $(SRC)

clean:
	rm -rf $(OBJ)
fclean:clean
	rm -rf $(NAME)
re:fclean all

.PHONY:all build clean fclean re