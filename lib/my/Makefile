##
## EPITECH PROJECT, 2017
## makefile
## File description:
## pool
##

CC	=	gcc

RM	=	rm -f

SRCS	=	$(wildcard *.c)

OBJS	=	$(SRCS:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJS)
		ar rc $(NAME) $(OBJS)
		cp $(NAME) ../$(NAME)
		cp my.h ../include
clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(OBJS)

re:	fclean all

.PHONY: all clean fclean re
