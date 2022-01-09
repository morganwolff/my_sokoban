##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## 
##

NAME	=	my_sokoban

SRCS	=	main.c	\
			src/lib/my_putchar.c	\
			src/lib/my_putstr.c	\
			src/lib/my_put_nbr.c	\
			src/lib/my_strlen.c	\
			src/lib/my_printf.c	\
			src/lib/my_strcat.c	\
			src/lib/my_str_to_word_array.c	\
			src/check_pos_p.c	\
			src/check_pos_x.c	\
			src/nbr_o.c	\
			src/nbr_x.c	\
			src/read_of_map.c	\
			src/display_map.c	\
			src/move_pos_p.c	\
			src/helper.c	\
			src/objectifs.c	\
			src/update_map.c	\
			src/box.c	\
			src/error.c	\

OBJS	=	$(SRCS:.c=.o)

CFLAGS =	-Wall -Wextra -g3 -I./include/ -lncurses

all:	$(NAME)

$(NAME):	$(OBJS) $(SRCS)
		gcc -o $(NAME) $(OBJS) $(CFLAGS)

clean:
		rm -rf $(OBJS)
		rm -f *.c~
		rm -f *.o
		rm -f src/*.c~
		rm -f src/*.o

fclean:		clean
		find . -type f -name $(NAME) -delete

re: fclean all
