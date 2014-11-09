# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mwilk <mwilk@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/09 16:17:56 by mwilk             #+#    #+#              #
#    Updated: 2014/11/09 16:21:01 by mwilk            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

SRCS_MEMORY = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c \
		ft_memmove.c ft_memchr.c ft_memcmp.c
SRCS_STR = ft_strlen.c ft_strdup.c ft_strchr.c ft_strrchr.c \
		ft_strstr.c ft_strnstr.c ft_strcmp.c ft_strncmp.c \
		ft_strcpy.c ft_strncpy.c ft_strcat.c ft_strncat.c \
		ft_strlcat.c ft_strtrim.c
SRCS_TEST = ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c \
		ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c
SRCS_AUTRES = ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c \
		ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c \
		ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c \
		ft_strjoin.c ft_strjoin.c ft_strsplit.c ft_itoa.c \
		ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
SRCS_LIST = ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c \
		ft_lstiter.c ft_lstmap.c ft_lst_last.c ft_lstmerge.c ft_lstlen.c \
		ft_mergesort.c
SRCS_TREE = ft_nodenew.c ft_nodedelone.c ft_nodedel.c ft_nodeaddson.c
SRCS_PERSO = ft_putlststr.c ft_putlststr_fd.c ft_strsplit_lst.c ft_lstaddq.c \
		ft_strcup.c ft_lststr_merge.c
SRCS = $(SRCS_MEMORY) $(SRCS_STR) $(SRCS_TEST) $(SRCS_AUTRES) $(SRCS_LIST) \
		$(SRCS_PERSO) $(SRCS_TREE)
OBJECTS = $(patsubst %.c,%.o,$(SRCS))

.PHONY: all

all: $(NAME)

$(NAME): $(OBJECTS)
	@ar rc $@ $(OBJECTS)
	@echo Creating Library $(NAME)

%.o: %.c
	cc -c -o $@ $(CFLAGS) $^

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
