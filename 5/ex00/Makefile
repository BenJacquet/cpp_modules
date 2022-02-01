NAME = Bureaucrat

SRCS = main.cpp\
		Bureaucrat.cpp

INCS = Bureaucrat.hpp

OBJS = $(SRCS:.cpp=.o)

CC = c++

CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

main.o : $(INCS)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(OBJS)

re : fclean all

.PHONY : all clean fclean re