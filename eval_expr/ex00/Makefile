# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nkoutrel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/31 11:16:18 by nkoutrel          #+#    #+#              #
#    Updated: 2016/07/31 11:16:19 by nkoutrel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

SRCS = srcs/

INCLUDES = includes/

CC = gcc

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(CC) $(FLAGS) $(SRCS) -I $(INCLUDES) -o $(NAME)

fclean:
	/bin/rm -f $(NAME)

re: fclean all
