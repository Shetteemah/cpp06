# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sheali <sheali@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/21 02:57:08 by sheali            #+#    #+#              #
#    Updated: 2024/05/21 02:57:09 by sheali           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= convert
CC		= g++
CFLAGS	= -Werror -Wextra -Wall -std=c++98
INCLUDE	= -I include

SRC_DIR	= src
INC_DIR	= include
OBJ_DIR	= obj

SOURCES	= $(wildcard $(SRC_DIR)/*.cpp)
OBJECTS	= $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SOURCES))

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $^ -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

clean:
	$(RM) -r $(OBJ_DIR)

fclean: clean
	$(RM) -r $(OBJ_DIR) $(NAME)

re: fclean all

.PHONY: all clean fclean re