# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aoulahra <aoulahra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/12 11:56:07 by aoulahra          #+#    #+#              #
#    Updated: 2024/12/13 20:47:13 by aoulahra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Serializer.cpp Data.cpp
OBJ = $(SRC:.cpp=.o)

NAME = serialize
CXX  = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
HEADERS = Serializer.hpp Data.hpp

all: ${NAME}

${NAME}: $(OBJ) $(HEADERS)
	$(CXX) $(CXXFLAGS) -o ${NAME} $(OBJ)

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean