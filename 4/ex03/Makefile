NAME = materia

SRCS = main.cpp\
		AMateria.cpp\
		Character.cpp\
		Ice.cpp\
		Cure.cpp

INCS = AMateria.hpp \
		Character.hpp\
		Ice.hpp\
		Cure.hpp

OBJS = $(SRCS:.cpp=.o)

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

%.o : %.cpp $(INCS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re