# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abesneux <abesneux@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/30 18:45:23 by abesneux          #+#    #+#              #
#    Updated: 2023/10/30 20:24:42 by abesneux         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC =	ft_printf.c \
		ft_printf_utils.c 

CC = gcc

CFLAGS = -Wall -Wextra -Werror

AR = ar rc

OBJS = $(SRC:.c=.o)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

all: $(NAME)
clean:
	$(RM) $(OBJS) $(BONUS_OBJS)
fclean: clean
	$(RM) $(NAME)
re: fclean $(NAME)