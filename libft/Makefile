.PHONY: all clean fclean re collect
CC := gcc
FLAG = -Wall -Wextra -Werror
SRCS = ./ft_strlen.c ./ft_isalnum.c ./ft_isascii.c ./ft_bzero.c ./ft_isalpha.c ./ft_isdigit.c ./ft_strrchr.c ./ft_isprint.c ./ft_memset.c ./ft_memcpy.c ./ft_atoi.c ./ft_toupper.c ./ft_tolower.c ./ft_strchr.c ./ft_strncmp.c ./ft_calloc.c ./ft_memchr.c ./ft_memcmp.c ./ft_strdup.c ./ft_strnstr.c ./ft_substr.c ./ft_strlcat.c ./ft_strlcpy.c ./ft_memmove.c ./ft_strjoin.c ./ft_strtrim.c ./ft_split.c ./ft_itoa.c ./ft_strmapi.c ./ft_striteri.c ./ft_putstr_fd.c ./ft_putchar_fd.c ./ft_putnbr_fd.c ./ft_putendl_fd.c
HEADER = ./
NAME = libft.a
BIN = ${SRCS:.c=.o}

all: ${NAME}

.c.o:
	${CC} ${FLAG} -c -I${HEADER} $< -o ${<:.c=.o}

${NAME}: ${BIN}
	ar rc ${NAME} ${BIN}
	ranlib ${NAME}

clean:
	rm -f ${BIN}

fclean: clean
	rm -f ${NAME}

re: fclean all

collect: ${NAME}
	clang -ggdb3 -O0 -Qunused-arguments -std=c11 -Wall -Werror -Wextra -Wno-sign-compare -Wno-unused-parameter -Wno-unused-variable -Wshadow -o s *.o -lm