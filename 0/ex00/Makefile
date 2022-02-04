NAME = megaphone

SRCS = megaphone.cpp

INCS = megaphone.hpp

CC = c++

CFLAGS = -Werror -Wextra -Wall

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

megaphone.o : $(INCS)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

clean :
	rm -rf $(OBJS)


fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re