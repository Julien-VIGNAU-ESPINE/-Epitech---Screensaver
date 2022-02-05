##
## EPITECH PROJECT, 2021
## Task 01
## File description:
## Compiles library, cleans folder and puts my.h in ../../include/
##

SRC 	=	my_compute_power_rec.c	\
		my_compute_square_root.c	\
		my_convert_base_min.c	\
		my_convert_base_maj.c	\
		my_getnbr.c		\
		my_isneg.c		\
		my_is_prime.c		\
		my_putchar.c		\
		my_put_nbr.c		\
		my_putstr.c		\
		my_printf.c		\
		my_revstr.c		\
		my_showmem.c		\
		my_showstr.c		\
		my_strcat.c		\
		my_strcmp.c		\
		my_strcpy.c		\
		my_strdup.c		\
		my_str_isalpha.c		\
		my_str_islower.c		\
		my_str_isnum.c		\
		my_str_isupper.c		\
		my_strlen.c		\
		my_strlowcase.c		\
		my_strncat.c		\
		my_strncmp.c		\
		my_strstr.c		\
		my_strupcase.c		\
		my_put_unnbr.c 
		
HDR	=	my.h	\

HDR_FILES =	my.h 	\

CFLAGS = -Wall -Werror

OBJ	=	$(SRC:.c=.o)

NAME	=	compile_lib

%.o: %.c
	@$(CC) $(CFLAGS) -c -o $@ $^\
	&& printf "[\033[1;32mcompiled\033[0m]% 50s\n" $< |  tr ' ' '.'\
	|| printf "[\033[1;31merror\033[0m]% 50s\n" $< |  tr ' ' '.'

.PHONY: all clean fclean re

all:	$(NAME)

$(NAME): $(OBJ)
	@cp $(HDR) ../../include
	@ar rc libmy.a $(OBJ)
	@cp libmy.a ../..
	@printf "\e[1;34mFinished compiling library\e[0m\n"

clean:
	@rm -f ../../libmy.a
	@echo "Removed root's libmy.a"

fclean:	clean
	@rm -f $(OBJ)
	@rm -f ./libmy.a
	@rm -f ../libmy.a
	@cd ../../include/ && rm -f $(HDR_FILES)
	@printf "\e[1;34mDeleted all .o in lib and all libmy.a\e[0m\n"

re: fclean all
