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
SRCS		= $(wildcard $(SRC_DIR)/*.c) $(wildcard $(SRC_DIR)/ft_printf/*.c)
OBJS		= $(patsubst $(SRC_DIR)/%.c,$(BUILD_DIR)/%.o, $(SRCS))

# Rules
all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@echo "$(GREEN)libft compiled! $(DEF_COLOR)"

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c | $(BUILD_DIR)
	@echo "$(YELLOW)Compiling: $< $(DEF_COLOR)" 
	@$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -c $< -o $@

$(BUILD_DIR):
	@echo "$(YELLOW)Build dir not found. Creating...$(DEF_COLOR)" 
	@mkdir -p $(BUILD_DIR)
	@mkdir -p $(BUILD_DIR)/ft_printf
	
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
