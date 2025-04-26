# Variables
CC			= cc
AR			= ar rcs
RM			= rm -f
CFLAGS		= -Wall -Wextra -Werror
NAME		= libft.a

# Folders
INCLUDE_DIR	= include
SRC_DIR		= src
BUILD_DIR	= build

# Colors
DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

# Files
SRC_FILES = ft_isalpha \
			ft_isdigit \
			ft_isalnum \
			ft_isascii \
			ft_isprint \
			ft_strlen \
			ft_memset \
			ft_bzero \
			ft_memcpy \
			ft_memmove \
			ft_strlcpy \
			ft_strlcat \
			ft_toupper \
			ft_tolower \
			ft_strchr \
			ft_strrchr \
			ft_strncmp \
			ft_memchr \
			ft_memcmp \
			ft_strnstr \
			ft_atoi \
			ft_calloc \
			ft_strdup \
			ft_strjoin \
			ft_strtrim \
			ft_split \
			ft_itoa \
			ft_substr \
			ft_strmapi \
			ft_striteri \
			ft_putchar_fd \
			ft_putstr_fd \
			ft_putendl_fd \
			ft_putnbr_fd

BONUS_FILES = ft_lstnew \
			  ft_lstadd_front \
			  ft_lstsize \
			  ft_lstlast \
			  ft_lstadd_back \
			  ft_lstdelone \
			  ft_lstclear \
			  ft_lstiter \
			  ft_lstmap

SRCS		= $(addprefix $(SRC_DIR)/, $(addsuffix .c, $(SRC_FILES)))
OBJS		= $(addprefix $(BUILD_DIR)/, $(addsuffix .o, $(SRC_FILES)))
BONUS_SRCS	= $(addprefix $(SRC_DIR)/, $(addsuffix .c, $(BONUS_FILES)))
BONUS_OBJS	= $(addprefix $(BUILD_DIR)/, $(addsuffix .o, $(BONUS_FILES)))

# Rules
all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@echo "$(GREEN)libft compiled! $(DEF_COLOR)"

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c | $(BUILD_DIR)
	@echo "$(YELLOW)Compiling: $< $(DEF_COLOR)" 
	@$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -c $< -o $@

$(BUILD_DIR): $(BUILD_DIR)
	@echo "$(YELLOW)Build dir not found. Creating...$(DEF_COLOR)" 
	@mkdir $(BUILD_DIR)
	
clean:
	@rm -rf $(BUILD_DIR)
	@echo "$(CYAN)Object files cleaned!$(DEF_COLOR)" 

fclean: clean
	@rm -f $(NAME)
	@echo "$(CYAN)libft.a cleaned!$(DEF_COLOR)" 

bonus: $(BONUS_OBJS) $(OBJS)
	@$(AR) $(NAME) $^
	@echo "$(GREEN) libft compiled with bonus! $(DEF_COLOR)"

re: fclean all
	@echo "$(GREEN)Cleaned and rebuilt libft!$(DEF_COLOR)" 

# Phony
.PHONY: clean fclean bonus re all
