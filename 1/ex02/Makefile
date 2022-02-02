NAME = Hi

SRCS = main.cpp

INCS = main.hpp

OBJS = $(SRCS:.cpp=.o)

CC = c++

CFLAGS = -Wall -Werror -Wextra

all : $(NAME)

main.o : $(INCS)

$(OBJS) : $(INCS)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re