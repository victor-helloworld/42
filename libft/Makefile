# Tutorial makigas 
# 	https://www.youtube.com/watch?v=jI2n8jofuRg
# Official documentation
# 	https://www.gnu.org/software/make/manual/make.html#toc-Overview-of-make

# VARIABLES #
# NAME = valu# Note: To substitute a variable's value $(NAME) or ${NAME}
# Two types of flavors
#	- Recursively-expanded variable 	A = B
#	- Simply expanded variable		A := B or A ::= B

# RULES #
# targets: prerequisites
# 	command > if @command nothing will be printed in the execution
# 	command
# 	command

# BUILT-IN RULES #
# Rules that are always available unless the makefile explicitly overrides or
# cancels them
# ‘$(CC) $(CPPFLAGS) $(CFLAGS) -c’.
# The default suffix list is: .out, .a, .ln, .o, .c, .cc, .C, .cpp, .p, .f, .F,
# .m, .r, .y, .l, .ym, .lm, .s, .S, .mod, .sym, .def, .h, .info, .dvi, .tex,
# .texinfo, .texi, .txinfo, .w, .ch .web, .sh, .elc, .el

# RECOMPILING DEPENDENCIES
# The the source file date changes, make will recompile. This happens when
# source file is newer than object file

# PATTERN RULES
# Looks like an ordinary rule except that it contains '%'
# %.o : %.c
# 	gcc $(CFLAGS) -c $<

# AUTOMATIC VARIABLES
# $< The name of the first prerequisite.
# $? The names of all the prerequisites that are newer than the target
# $@ The file name of the target of the rule. 
# ex.
# programa: $(OBJS)
# 	gcc -o $@ $?

# Makefile to compile libft library

SRCS = ft_atoi.c\
       ft_bzero.c\
       ft_calloc.c\
       ft_isalnum.c\
       ft_isalpha.c\
       ft_isascii.c\
       ft_isdigit.c\
       ft_isprint.c\
       ft_memchr.c\
       ft_memcmp.c\
       ft_memcpy.c\
       ft_memmove.c\
       ft_memset.c\
       ft_strchr.c\
       ft_strdup.c\
       ft_strlcat.c\
       ft_strlcpy.c\
       ft_strlen.c\
       ft_strncmp.c\
       ft_strnstr.c\
       ft_strrchr.c\
       ft_tolower.c\
       ft_toupper.c\
	   ft_itoa.c\
	   ft_putchar_fd.c\
	   ft_putendl_fd.c\
	   ft_putnbr_fd.c\
	   ft_putstr_fd.c\
	   ft_split.c\
	   ft_strjoin.c\
	   ft_strmapi.c\
	   ft_striteri.c\
	   ft_strtrim.c\
	   ft_substr.c

BONUS =	ft_lstadd_back_bonus.c\
		ft_lstadd_front_bonus.c\
		ft_lstclear_bonus.c\
		ft_lstdelone_bonus.c\
		ft_lstiter_bonus.c\
		ft_lstlast_bonus.c\
		ft_lstmap_bonus.c\
		ft_lstnew_bonus.c\
		ft_lstsize_bonus.c\

OBJS = ${SRCS:.c=.o}

BONUS_OBJS	= $(BONUS:.c=.o)

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

RM = rm -f

.c.o: 		$(SRCS)
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar rc $(NAME) $?

# Main rule is defined as "all"
all:		${NAME}

run:		re
			./a.out

bonus:		$(BONUS_OBJS)
			ar rc $(NAME) $?

clean:
			${RM} *.o	

fclean:		clean
			${RM} ${NAME}

re:		fclean all fclean

#Makefile targets are by default "file targets"
#"File targets" are used to build files from other files
# .PHONY rules are fictitial rules (always out of date)
.PHONY:		all clean fclean re bonus
