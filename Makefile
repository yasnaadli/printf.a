# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yamohamm <yasnaadli21@gmail.com>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/08 18:54:56 by yamohamm          #+#    #+#              #
#    Updated: 2024/12/10 18:15:21 by yamohamm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS =	ft_printf.c \
		writetext.c \
		writehex.c \

		
OBJS	= $(SRCS:.c=.o)
RM		= rm -f
LIBC	= ar -rcs
FLAGS	= -Wall -Wextra -Werror
INCS	= .

$(NAME): $(OBJS)
		$(LIBC) $(NAME) $(OBJS)
		
all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	
re:	fclean all

.PHONY: all clean fclean re .c.o
