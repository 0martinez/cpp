# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omartine <omartine@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/08 16:56:41 by omartine          #+#    #+#              #
#    Updated: 2022/06/08 16:59:57 by omartine         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= ring
CL				= clang++
RM				= rm -rf
CFLAGS			= -Wall -Wextra -Werror
MAKE			= make


SRCS = megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CL) $(OBJS) -o $(NAME)

clean:
				$(RM) $(OBJS) $(BONUS_O)
fclean:			clean
				$(RM) $(NAME) $(NAME_BONUS)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
