##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

EXEC	=	my_screensaver

PROG	=	main.c				\
		src/make_window.c		\
		src/basics.c			\
		src/circle.c

LIB	=	libmy.a

SRC	=	lib/my/my_compute_power_rec.c	\
		lib/my/my_compute_square_root.c	\
		lib/my/my_convert_base_min.c	\
		lib/my/my_convert_base_maj.c	\
		lib/my/my_getnbr.c		\
		lib/my/my_isneg.c		\
		lib/my/my_is_prime.c		\
		lib/my/my_putchar.c		\
		lib/my/my_put_nbr.c		\
		lib/my/my_putstr.c		\
		lib/my/my_printf.c		\
		lib/my/my_revstr.c		\
		lib/my/my_showmem.c		\
		lib/my/my_showstr.c		\
		lib/my/my_strcat.c		\
		lib/my/my_strcmp.c		\
		lib/my/my_strcpy.c		\
		lib/my/my_strdup.c		\
		lib/my/my_str_isalpha.c		\
		lib/my/my_str_islower.c		\
		lib/my/my_str_isnum.c		\
		lib/my/my_str_isupper.c		\
		lib/my/my_strlen.c		\
		lib/my/my_strlowcase.c		\
		lib/my/my_strncat.c		\
		lib/my/my_strncmp.c		\
		lib/my/my_strncpy.c		\
		lib/my/my_strstr.c		\
		lib/my/my_strupcase.c		\
		lib/my/my_put_unnbr.c		

OBJ	=	$(SRC:.c=.o)

$(EXEC): $(LIB) $(PROG)
	gcc -o $(EXEC) $(PROG) -Iinclude/ -L. -lmy -lcsfml-graphics -lcsfml-system -lm

$(LIB):	 $(OBJ)
	ar rc ./$(LIB) $(OBJ)
	rm -f $(OBJ)

all: $(LIB)

clean:
	rm -f *~
	rm -f $(OBJ)

fclean: clean
	rm -f $(OBJ)
	rm -f ./lib/$(LIB)
	rm -f $(EXEC)

re: fclean all
