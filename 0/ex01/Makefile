NAME = PhoneBook

SRCS =  srcs/main.cpp \
		srcs/phonebook.class.cpp \
		srcs/contact.class.cpp

INCS =  incs/phonebook.class.hpp \
		incs/contact.class.hpp

OBJS = $(SRCS:.cpp=.o)

CC = c++

CFLAGS = -Wall -Werror -Wextra

all : $(NAME)

$(OBJS) : $(INCS)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re