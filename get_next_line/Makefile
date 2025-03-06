#*************************************************************************** #
SRC = get_next_line.c get_next_line_utils.c

BONUS_SRC = get_next_line_bonus.c get_next_line_utils_bonus.c

NAME = gnl.a

CC = clang

FLAGS = -Wall -Wextra -Werror -g

OBJS = $(SRC:.c=.o)

BONUS_OBJS = $(BONUS_SRC:.c=.o)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

bonus: $(BONUS_OBJS)
	ar rc $(NAME) $(BONUS_OBJS)

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
# **************************************************************************** #
