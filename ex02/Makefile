# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aoulahra <aoulahra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/13 21:13:34 by aoulahra          #+#    #+#              #
#    Updated: 2024/12/13 21:39:48 by aoulahra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp functions.cpp Base.cpp
OBJ = $(SRC:.cpp=.o)

NAME = identify
CXX  = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
HEADERS = Base.hpp A.hpp B.hpp C.hpp functions.h

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
