CC					=	gcc
CFLAGS				=	-Wall -Wextra -Werror 
NAME				=	push_swap
RM					=	rm -rf

RESET			=	\033[0m
GREEN			=	\033[32m
YELLOW			=	\033[33m
BLUE			=	\033[34m
RED				=	\033[31m

SOURCE			=	push_swap.c \
					./utils/bubble_sort.c ./utils/check_argn.c ./utils/ft_printf.c ./utils/ft_split.c \
					./utils/utils.c ./utils/utils2.c ./utils/utils3.c ./utils/utils4.c \
					./utils/push.c ./utils/reverse_rotate.c ./utils/rotate.c ./utils/swap.c

OBJECT			=	${SOURCE:.c=.o}

all:				$(NAME)

$(NAME):			$(OBJECT)
					@$(CC) $(CFLAGS) $(OBJECT) -o $(NAME)
					@echo "$(BLUE)!!!....Done....!!!$(RESET)"

clean:				
					@$(RM) $(OBJECT)
					@echo "$(RED)!!!....Cleaned....!!!$(RESET)"

fclean:				clean
					@$(RM) push_swap
					@echo "$(RED)!!!....Full Cleaned....!!!$(RESET)"

re:					fclean $(NAME)

sil:				$(NAME) clean 
					@echo $(shell clear)

.PHONY:				all clean fclean re bonus
