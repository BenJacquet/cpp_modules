NAME = megaphone

SRCS = srcs/megaphone.cpp

INCS = incs/megaphone.hpp

CC = c++

CFLAGS = -Werror -Wextra -Wall

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

srcs/megaphone.o : $(INCS)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

clean :
	rm -rf $(OBJS)


fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re