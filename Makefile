##
## EPITECH PROJECT, 2017
## Makefile
## File description:
##
##

SRC1	= answer/first.c

SRC2	= answer/second.c

SRC3	= answer/third.c

SRC4	= answer/fourth.c

SRC5	= answer/fifth.c

SRC6	= answer/sixth.c

OBJ1	=	$(SRC1:.c=.o)

OBJ2	=	$(SRC2:.c=.o)

OBJ3	=	$(SRC3:.c=.o)

OBJ4	=	$(SRC4:.c=.o)

OBJ5	=	$(SRC5:.c=.o)

OBJ6	=	$(SRC6:.c=.o)

CFLAGS	=	-W -Wall -Wextra -g3 -I./include

GCC =	gcc

NAME1	=	exo1

NAME2	=	exo2

NAME3	=	exo3

NAME4	=	exo4

NAME5	=	exo5

NAME6	=	exo6

all:	$(NAME1)

$(NAME1):	$(OBJ1)
	$(GCC) -o $(NAME1) $(OBJ1) $(CFLAGS)

$(NAME2):	$(OBJ2)
	$(GCC) -o $(NAME2) $(OBJ2) $(CFLAGS)

$(NAME3):	$(OBJ3)
	$(GCC) -o $(NAME3) $(OBJ3) $(CFLAGS)

$(NAME4):	$(OBJ4)
	$(GCC) -o $(NAME4) $(OBJ4) $(CFLAGS)

$(NAME5):	$(OBJ5)
	$(GCC) -o $(NAME5) $(OBJ5) $(CFLAGS)

$(NAME6):	$(OBJ6)
	$(GCC) -o $(NAME6) $(OBJ6) $(CFLAGS)
	

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
