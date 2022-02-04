NAME = sed

SRCS = main.cpp

INCS = main.hpp

OBJS = $(SRCS:.cpp=.o)

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror

all : $(NAME)

%.o : %.cpp $(INCS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

clean :
	rm -rf $(OBJS)
	rm -rf *.replace

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re