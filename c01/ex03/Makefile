NAME = unnecessaryViolence

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

OBJ = $(SRC:.cpp=.o)

all :$(NAME)

$(NAME): $(OBJ)
	@echo "\033[0;33mCompiling...\033[0m"
	$(CXX) $(OBJ) -o $(NAME)
	@echo "\033[0m"

.cpp.o:
	@echo "\033[0;32mGenerating obj..."
	$(CXX) $(CXXFLAGS) -c $<
	@echo "\033[0m"

clean:
	@echo "\033[0;31mCleaning..."
	rm -f $(OBJ)
	@echo "\033[0m"

fclean: clean
	@echo "\033[0;31mRemoving executable..."
	rm -f $(NAME)
	@echo "\033[0m"

re: fclean all

.PHONY: all re clean fclean