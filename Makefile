NAME	= minishell

SRCS	=

FLAGS 	=	-Wall -Wextra -Werror

OBJS	= $(SRCS:.c=.o)

.PHONY:		all clean fclean re bonus

all: $(NAME)

$(NAME):  $(OBJS)
	@cc $(FLAGS) $(OBJS) -o $(NAME)

%.o:%.c
	@echo "compile $^ ..."
	@cc $(FLAGS) -c $< -o $@

clean:
	@rm -f ${OBJS}

fclean:    clean
	@rm -f ${NAME}
	@echo "\n\033[0;31m</ EVERYTHING HAS BEEN DELETED! >\033[0m\n"

re: fclean all
