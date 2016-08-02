# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nkoutrel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/30 11:37:51 by nkoutrel          #+#    #+#              #
#    Updated: 2016/07/30 11:37:53 by nkoutrel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-2

SRC = list_ft.c dim_check.c printing.c rushes0_4.c pipe_loop.c

HEADERS = rush_2.h

CC = gcc

FLAGS = -Wall -Wextra -Werror

.PHONY: all compile fclean

all:	compile

compile:
	$(CC) $(FLAGS) -o $(NAME) $(SRC) -I$(HEADERS)

fclean:
	/bin/rm -f $(NAME)
