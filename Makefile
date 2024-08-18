NAME = push_swap
BONUS_NAME = .bonus
PROGRAM = checker

SRCS = push_swap.c swap.c push.c rotate.c reverse.c algorithm.c minisort.c\
		ft_split_spaces.c new_stack.c check_input.c calculate_cost.c\
		organize.c calculate_index.c

BONUS = bonus/swap_bonus.c bonus/push_bonus.c bonus/reverse_bonus.c bonus/rotate_bonus.c\
		bonus/checker_bonus.c bonus/new_stack_bonus.c bonus/check_input_bonus.c\
		bonus/ft_split_spaces_bonus.c bonus/gnl/get_next_line.c bonus/gnl/get_next_line_utils.c

OBJS = ${SRCS:.c=.o}
BONUS_OBJS = ${BONUS:.c=.o}

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
REMOVE = rm -f

all: ${NAME}

${NAME}: ${OBJS} $(LIBFT)
		${CC} ${CFLAGS} ${OBJS} -L$(LIBFT_DIR) -lft -o ${NAME}

bonus: ${BONUS_NAME}

${BONUS_NAME}: ${BONUS_OBJS} $(LIBFT)
		@touch $(BONUS_NAME)
		${CC} ${CFLAGS} ${BONUS_OBJS} -L$(LIBFT_DIR) -lft -o ${PROGRAM}

$(LIBFT):
		make -C $(LIBFT_DIR) all

clean:
		${REMOVE} ${OBJS} ${BONUS_OBJS}
		@rm -rf $(BONUS_NAME)
		@make -sC $(LIBFT_DIR) clean

fclean: 
		${REMOVE} ${OBJS} ${BONUS_OBJS}
		${REMOVE} ${NAME} ${PROGRAM}
		@rm -rf $(BONUS_NAME)
		@make -sC $(LIBFT_DIR) fclean

re: fclean all

clear:
	@clear

run: clear re
	./$(NAME) "8 6 5 7 3 2 1 4 9"

.PHONY:	all clean fclean re clear run bonus
