# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mwilk <mwilk@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/09 16:17:56 by mwilk             #+#    #+#              #
#    Updated: 2016/06/15 15:07:53 by mwilk            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


## PROJECT

NAME = libft.a

## COMPILATEUR

OS = $(shell uname -s)
CC = clang
FLAGS = -Wall -Wextra -Werror

## FILES

SRC = $(shell ls -1 sources)
OBJ = $(patsubst %.c, obj/%.o, $(SRC))

INC =  -I ./
INC += -I ./includes/
INC += -I minilibx/


LIB =  -L libft -lft
LIB += -L minilibx/ -lmlx -framework OpenGl -framework Appkit

## RULES

all: $(NAME)

$(NAME) :	obj $(OBJ)
			@echo "\033[32m (>0.0)>\t./|Invocation|\.\t<(O.O<) \033[0m"
#			@$(CC) -c $(FLAGS) $(SRC) $(INC)
			@ar rc $(NAME) $(OBJ)
			@ranlib $(NAME)
			@echo "\033[33m <(O.O<)\tWOW ! Very Library ! Amaze !\t(>^o^)> \033[0m"

obj/%.o:	sources/%.c
			@$(CC) $(FLAGS) $(INC) -o $@ -c $<
			@echo "\033[0;34;44m<(O.o)>\t\t$@\t\t<(o.O)>\033[0m"

obj:
			mkdir -p obj

clean:
			@rm -f $(OBJ)
			@echo "\033[36m\tT.T Miss you lib-object files T.T\t\033[0m"

fclean: clean
			@rm -rf $(NAME)
			@echo "\033[36m\tX.x Bye Bye execute file >_<\t\033[0m"


re: fclean all

.PHONY: all normal clean fclean re

