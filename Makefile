SRCS	= ft_putstr.c ft_putnbr.c ft_putchar.c ft_adresse.c \

OBJS	= ${SRCS:.c=.o}

NAME	= libftprintf.a

CC	= gcc

CFLAGS	= -Wall -Wextra -Werror

RM		= rm -rf

all : ${NAME}

${NAME} : ${OBJS}
	ar rcs ${NAME} ${OBJS}

clean :
	${RM} ${OBJS}

fclean :	clean
	${RM} ${NAME}

re : fclean all
