CFLAGS = -Wall -Wextra -Werror -g

SRC_FILES = ft_isalpha_test.c \
			ft_isdigit_test.c \
			ft_isalnum_test.c \
			ft_isascii_test.c \
			ft_isprint_test.c \
			ft_strlen_test.c \
			ft_memset_test.c \
			ft_bzero_test.c \
			ft_memcpy_test.c \
			ft_memmove_test.c \
			ft_strlcpy_test.c \
			ft_strlcat_test.c \
			ft_toupper_test.c \
			ft_tolower_test.c \
			ft_strchr_test.c \
			ft_strrchr_test.c \
			ft_strncmp_test.c \
			ft_memchr_test.c \
			ft_memcmp_test.c \
			ft_strnstr_test.c \
			ft_atoi_test.c

OBJ_FILES = $(SRC_FILES:.c=.o)

TEST_NAMES = $(addprefix $(BUILD_FOLDER)/, $(SRC_FILES:%.c=%))

BUILD_FOLDER = ./build

all: $(TEST_NAMES)

$(TEST_NAMES):%: %.o
	cc $(CFLAGS) -o $@ $^ -L.. -lft
	rm -f $<

$(BUILD_FOLDER)/%.o: %.c
	@mkdir -p $(BUILD_FOLDER)
	cc $(CFLAGS) -o $@ -c $^

clean:
	rm -rf $(BUILD_FOLDER)/*.o

fclean:
	rm -rf $(BUILD_FOLDER)

re: fclean all
