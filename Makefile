# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsaumon <lsaumon@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/20 13:05:47 by lsaumon           #+#    #+#              #
#    Updated: 2023/12/20 13:11:09 by lsaumon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	push_swap.c \
		

OBJS =	${SRCS:.c=.o}

CC =	cc
CFLAGS =	-Wall -Wextra -Werror
RM =	rm -f
AR =	ar rcs
NAME =	libft.a

all:	${NAME}

${NAME}:	${OBJS}
		${AR} ${NAME} ${OBJS}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean ${NAME}

bonus : ${OBJS}
	${AR} ${NAME} ${OBJS}

.PHONY: all clean fclean re