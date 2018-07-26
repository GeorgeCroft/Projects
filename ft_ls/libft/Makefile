NAME = libft.a

INC = -I ./includes/

FLAGS = -Wall -Wextra -Werror

SRCS_NAME = ft_putnbr.c \
			ft_atoi.c \
			ft_isalpha.c \
			ft_isdigit.c \
			ft_isascii.c \
			ft_putchar.c \
			ft_isalnum.c \
			ft_isprint.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_memset.c \
			ft_strcpy.c \
			ft_strncpy.c \
			ft_strcmp.c \
			ft_strncmp.c \
			ft_strlen.c \
			ft_strstr.c \
			ft_strdup.c \
			ft_strcat.c \
			ft_strlcat.c \
			ft_putstr.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memccpy.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncat.c \
			ft_strnstr.c \
			ft_strtrim.c \
			ft_putendl.c \
			ft_putendl_fd.c \
			ft_putchar_fd.c \
			ft_putnchar.c \
			ft_putstr_fd.c \
			ft_putstr_free.c \
			ft_putnbr_fd.c \
			ft_memcmp.c \
			ft_memchr.c \
			ft_memdel.c \
			ft_memmove.c \
			ft_itoa.c \
			ft_memalloc.c \
			ft_strnew.c \
			ft_strdel.c \
			ft_strclr.c \
			ft_striter.c \
			ft_striteri.c \
			ft_strmap.c \
			ft_strmapi.c \
			ft_strequ.c \
			ft_strnequ.c \
			ft_strsub.c \
			ft_strjoin.c \
			ft_strsplit.c \
			ft_lstnew.c \
			ft_lstdelone.c \
			ft_lstmap.c \
			ft_lstiter.c \
			ft_lstadd.c \
			ft_lstdel.c \
			ft_swap.c \
			ft_printf.c \
			ft_printf_2.c \
			ft_printf_3.c \
			ft_printf_4.c \
			ft_printf_5.c \
			ft_printf_6.c \
			ft_itoa_longs.c \
			wide_char.c \
			wide_related.c \

SRCS_PATH = srcs/
OBJ_PATH  = obj/

SRCS = $(addprefix $(SRCS_PATH), $(SRCS_NAME))
OBJ = $(addprefix $(OBJ_PATH), $(SRCS_NAME:.c=.o))

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "\033[32mBinary \033[1;32m$(NAME)\033[1;0m\033[32m created.\033[0m"

$(OBJ_PATH)%.o: $(SRCS_PATH)%.c
	@mkdir -p obj
	@gcc -c $(FLAGS) $(INC) $< -o $@
	@echo "\033[34m\033[1mCompilation of \033[0m\033[36m$(notdir $<)\033[1m\033[34m done.\033[0m"

clean:
	@/bin/rm -rf $(OBJ_PATH)
	@echo "\033[31mObjects files \033[1;31m$(OBJS_LIST)\033[1;0m\033[31m removed.\033[0m"

fclean: clean
	@/bin/rm -rf $(NAME)
	@echo "\033[31mBin \033[1;31m$(NAME)\033[1;0m\033[31m removed.\033[0m"

re: fclean all

.PHONY: all, clean, fclean, re
