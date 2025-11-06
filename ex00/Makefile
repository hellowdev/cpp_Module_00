CC = c++

NAME = megaphone

CXXFLAGS = -Wall -Wextra -Werror #-std=c++98

SRC = megaphone.cpp

F_OBJ = ${SRC:.cpp=.o}

all: $(NAME)

$(NAME): $(F_OBJ)
		@$(CC) $(CXXFLAGS) $(F_OBJ) -o $(NAME)

%.o: %.cpp
		@$(CC) $(CXXFLAGS) -c $< -o $@

clean :
	@rm -rf $(F_OBJ)

fclean : clean
	@rm -rf $(NAME)

re : fclean all