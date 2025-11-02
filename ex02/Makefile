CXX = g++

NAME = myprog

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = tests.cpp Account.cpp

F_OBJ = ${SRC:.cpp=.o}

all: $(NAME)

$(NAME): $(F_OBJ)
		@$(CXX) $(CXXFLAGS) $(F_OBJ) -o $(NAME)

%.o: %.cpp Account.hpp
		@$(CXX) $(CXXFLAGS) -c $< -o $@

clean :
	@rm $(F_OBJ)

fclean : clean
	@rm -rf $(NAME)

re : fclean all	