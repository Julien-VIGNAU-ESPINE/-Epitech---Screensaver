##
## EPITECH PROJECT, 2021
## <DON'T FORGET TO PUT PROJECT NAME HERE!!!!>
## File description:
## Makefile
##


## Variable to be modified
rm = rm -rf

TARGET = my_screensaver

CFLAGS = -Wextra -Wall -Iinclude

LDFLAGS	=	-L./ -lmy -lcsfml-graphics -lcsfml-system -lm -lcsfml-window

SRC	=	src/main.c \
		src/window/create_window.c  \
		src/window/framebuffer.c \
		src/shapes/my_put_pixel.c \
		src/shapes/circle.c \
		src/shapes/square.c \
		src/loop.c

OBJ	=	$(SRC:.c=.o)

LIB_MAKE_PATH	=	lib/my/

LIB	= libmy.a

all:	$(LIB)	$(TARGET)

%.o: %.c
	@$(CC) $(CFLAGS) -c -o $@ $^\
	&& printf "[\033[1;32mcompiled\033[0m] % 29s\n" $< |  tr ' ' '.'\
	|| printf "[\033[1;31merror\033[0m] % 29s\n" $< |  tr ' ' '.'

$(LIB):
	@$(MAKE) -C $(LIB_MAKE_PATH)

$(TARGET): $(OBJ)
	@$(CC) -o $@ $^ $(LDFLAGS)
	@echo -e "\e[1;34mFinished compiling $@\e[0m"

PHONY:	all	fclean	clean	re

debug: CFLAGS += -g3
debug: clean all

clean:
	@$(rm) $(OBJ)
	@echo "Removed .o files"
	@$(MAKE) -C $(LIB_MAKE_PATH) clean

fclean: clean
	@$(rm) $(TARGET)
	@echo "Removed binary file"
	@$(MAKE) -C $(LIB_MAKE_PATH) fclean

re: fclean all
