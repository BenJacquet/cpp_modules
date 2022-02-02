NAME = Form

SRCS = main.cpp\
		Bureaucrat.cpp \
		Form.cpp

INCS = Bureaucrat.hpp\
		Form.hpp

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
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re