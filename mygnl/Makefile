.PHONY: all clean fclean re collect
CC := gcc
FLAG = -Wall -Wextra -Werror -D BUFFER_SIZE=100
SRCS = ./get_next_line.c ./get_next_line_utils.c ./main.c
HEADER = ./
NAME = get_next_line.a
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

rem : fclean
	rm -f m

collect: re
	clang -ggdb3 -O0 -Qunused-arguments -std=c11 -Wall -Werror -Wextra -Wno-sign-compare -Wno-unused-parameter -Wno-unused-variable -Wshadow -o m *.o -lm