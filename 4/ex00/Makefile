NAME = polymorphism

SRCS = main.cpp\
		Animal.cpp\
		Dog.cpp\
		Cat.cpp\
		WrongAnimal.cpp\
		WrongCat.cpp\

INCS = Animal.hpp\
		Dog.hpp\
		Cat.hpp\
		WrongAnimal.cpp\
		WrongCat.cpp\

OBJS = $(SRCS:.cpp=.o)

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

main.o : $(INCS)

$(NAME) : $(OBJS)
	$(CC) $(CFLAG) -o $@ $(OBJS)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
