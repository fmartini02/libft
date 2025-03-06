#************************************************************************************#

.SILENT:

PRINTF = ft_printf/libftprintf.a

GNL = get_next_line/gnl.a

STD_LIB = std_fun/std_lib.a

NAME = libft.a

$(PRINTF):
	make --no-print-directory -C ft_printf/

$(GNL):
	make --no-print-directory -C get_next_line/

$(STD_LIB):
	make --no-print-directory -C std_fun/

all: $(NAME)

$(NAME): $(STD_LIB) $(GNL) $(PRINTF)
	rm -f $(NAME)
	ar -x $(STD_LIB)
	ar -x $(GNL)
	ar -x $(PRINTF)
	ar rc $(NAME) *.o
	rm -f *.o

bonus:
	make --no-print-directory -C ft_printf bonus
	make --no-print-directory -C get_next_line bonus
	make --no-print-directory -C std_fun bonus
	$(MAKE) all

clean:
	rm -f *.o
	make --no-print-directory -C std_fun clean
	make --no-print-directory -C get_next_line clean
	make --no-print-directory -C ft_printf clean

fclean: clean
	rm -f $(NAME)
	make --no-print-directory -C std_fun fclean
	make --no-print-directory -C get_next_line fclean
	make --no-print-directory -C ft_printf fclean

re: fclean all

re_bonus: fclean bonus

.PHONY: all clean fclean re bonus $(PRINTF) $(GNL) $(STD_LIB)


