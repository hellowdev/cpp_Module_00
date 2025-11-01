CXX = g++

NAME = phonebook

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp PhoneBook.cpp	Contact.cpp

F_OBJ = ${SRC:.cpp=.o}

all: $(NAME)

$(NAME): $(F_OBJ)
		@$(CXX) $(CXXFLAGS) $(F_OBJ) -o $(NAME)

%.o: %.cpp PhoneBook.hpp
		@$(CXX) $(CXXFLAGS) -c $< -o $@

clean :
	@rm $(F_OBJ)

fclean : clean
	@rm -rf $(NAME)

re : fclean all	