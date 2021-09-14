SRCS	= ft_isalnum.c\
		  ft_isalpha.c\
		  ft_isdigit.c

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

CC		= gcc

RM		= rm -f

CFLAGS	= -Wall -Werror -Wextra

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar rc libft.a ${OBJS}

all:		${NAME}

clean:
			${RM} *.o	

fclean:		clean
			${RM} ${NAME}

run:		re
			./a.out

re:			fclean all fclean

.PHONY:		all clean fclean re
