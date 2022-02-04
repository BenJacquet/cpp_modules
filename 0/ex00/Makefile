NAME = megaphone

SRCS = megaphone.cpp

INCS = megaphone.hpp

CXX = c++

CXXFLAGS = -Werror -Wextra -Wall

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

%.o : %.cpp $(INCS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean :
	rm -rf $(OBJS)


fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re