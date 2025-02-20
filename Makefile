CC 			:= cc
CFLAGS 		:= -Wall -Wextra -Werror -MMD
RM 			:= rm -rf

RESET 		= 	\033[0m
RED 		= 	\033[31m
GREEN 		= 	\033[32m
YELLOW 		= 	\033[33m
BLUE 		= 	\033[34m

D_SRC		:= src/ctype src/extra src/stdio src/stdlib src/string
D_OBJ		:= obj
D_INC		:= include

SRCS 		:= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
			 ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c \
			 ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
			 ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c \
			 ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c \
			 ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
			 ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c \
 			 ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
			 ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
			 ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
OBJS		:= $(addprefix $(D_OBJ)/, $(SRCS:.c=.o))
DEPS 		:= $(addprefix $(D_OBJ)/, $(SRCS:.c=.d))

VPATH		:= $(D_SRC)

NAME 		:= libft.a

all: $(NAME)

$(NAME): $(OBJS)
	@ar -rc $(NAME) $(OBJS)
	@echo Library file "$(GREEN)$(NAME)$(RESET)" is ready
	
-include $(DEPS)

$(D_OBJ)/%.o: %.c | $(D_OBJ)
	@$(CC) $(CFLAGS) -I$(D_INC) -c $< -o $@

$(D_OBJ): 
	@mkdir -p $@

clean:
	@$(RM) $(D_OBJ)
	@$(RM) $(OBJS)
	@$(RM) $(DEPS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re