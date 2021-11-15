NAME	= libft.a

SRCS	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
            ft_tolower.c ft_toupper.c  ft_atoi.c ft_itoa.c ft_calloc.c \
            ft_memset.c ft_bzero.c ft_memcpy.c ft_memcpy.c ft_memmove.c \
            ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c \
            ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_substr.c \
            ft_strdup.c ft_strjoin.c ft_strtrim.c ft_split.c ft_strmapi.c \
            ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \

OBJS	= $(SRCS:.c=.o)

BONUS_S	= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
		  ft_lstlast.c ft_lstadd_back.c\
		  ft_lstclear.c ft_lstiter.c ft_lstmap.c ft_lstdelone.c \

BONUS_O	= $(BONUS_S:.c=.o)

ICL	= libft.h

CFLAGS	= -Wall -Wextra -Werror

LIB		= ar -rcs

RM		=	rm -f


all:	$(NAME)

$(NAME):	$(OBJS)
		$(LIB) $(NAME) $(OBJS)

bonus:		$(NAME) $(BONUS_O)
		$(LIB) $(NAME) $(BONUS_O)

clean:
		$(RM) $(OBJS) $(BONUS_O)

fclean:	clean
		$(RM) $(NAME)

re:	fclean all

.PHONY:	all bonus clean fclean re
