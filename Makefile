NAME 	= push_swap

LIBFT 	= libft
SRCS	= src/main.c src/push_swap.c
SRCS_B	=

OBJS	= $(patsubst %.c,%.o,$(SRCS))
OBJS_B  = $(patsubst %.c,%.o,$(SRCS_B))

RM		= rm -f

CFLAGS	= -Wall -Werror -Wextra

INCLUDES = -I./includes

HEADER = includes/push_swap.h

all:	$(NAME)

%.o: %.c	$(HEADER) libft/libft.h
	gcc $(CFLAGS) -I $(HEADER) -c $< -o $@

$(NAME):	$(OBJS)
	@make -C $(LIBFT)
	@make bonus -C $(LIBFT)
	cp libft/libft.a $(NAME)
	@ar rc $(NAME) $(OBJS)

bonus:
	@make OBJS="$(OBJS_B)" all

clean:
	@make clean -C $(LIBFT)
	$(RM) $(OBJS) $(OBJS_B)

fclean:	clean
	$(RM) $(LIBFT)/libft.a
	$(RM) $(NAME)

re:		fclean all

.PHONY:	all clean fclean re
