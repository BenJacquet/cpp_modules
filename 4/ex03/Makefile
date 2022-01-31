NAME = materia

SRCS = main.cpp\
		AMateria.cpp\
		ICharacter.cpp\
		Ice.cpp\
		Cure.cpp

INCS = AMateria.hpp \
		ICharacter.hpp\
		Ice.hpp\
		Cure.hpp

OBJS = $(SRCS:.cpp=.o)

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

main.o : $(INCS)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re