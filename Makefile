##
## Makefile for $ in /home/Kitero/delivery/CPool_rush3
## 
## Made by Theo CLEMENT
## Login   <Kitero@epitech.net>
## 
## Started on  Sat Oct 29 19:46:06 2016 Theo CLEMENT
## Last update Thu Jan  5 20:35:11 2017 Theo CLEMENT
##

AC	= ar rc

RM	= rm -f

NAME	= libmy.a

SRCS	= my_putchar.c  \
	  my_put_nbr.c  \
	  my_put_nbr_normal.c   \
	  my_putstr.c   \
	  my_printf_ptr.c       \
	  my_put_nbr_oct.c      \
	  my_getnbr.c   \
	  space.c       \
	  error.c       \
	  flags1.c      \
	  flags2.c      \
	  attribute_char.c      \
	  my_strdup.c

OBJS	= $(SRCS:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
	$(AC) $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
