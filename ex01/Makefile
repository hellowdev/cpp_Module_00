CC = c++

NAME = phonebook

CXXFLAGS = -Wall -Wextra -Werror #-std=c++98

SRC = main.cpp PhoneBook.cpp	Contact.cpp

F_OBJ = ${SRC:.cpp=.o}

all: $(NAME)

$(NAME): $(F_OBJ)
		@$(CC) $(CXXFLAGS) $(F_OBJ) -o $(NAME)

%.o: %.cpp PhoneBook.hpp Contact.hpp
		@$(CC) $(CXXFLAGS) -c $< -o $@

clean :
	@rm -rf $(F_OBJ)

fclean : clean
	@rm -rf $(NAME)

re : fclean all	