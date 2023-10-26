NAME = libft.a

SRCS = $(shell ls *.c)
FLAGS = -Wall -Wextra -Werror

OBJS = ${SRCS:.c=.o}

all: ${NAME}

${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}

%.o: %.c
	cc ${FLAGS} -c -o $@ $<

clean:
	rm -f ${OBJS}

fclean:
	rm -f ${NAME}

re: clean fclean all
