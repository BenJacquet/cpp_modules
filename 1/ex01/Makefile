NAME = Moar

SRCS = main.cpp \
	Zombie.cpp \
	ZombieHorde.cpp \

INCS = Zombie.hpp

OBJS = $(SRCS:.cpp=.o)

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra

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