# Libft

First project as a student at 42. The goal was to reimplement standard C library functions and create utility functions to be used throughout the cursus.

## Features

- **Character checks**: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_islower`, `ft_isupper`
- **Conversions**: `ft_atoi`, `ft_atol`, `ft_atoll`, `ft_itoa`, `ft_toupper`, `ft_tolower`, `ft_strtoll`
- **Memory management**: `ft_bzero`, `ft_calloc`, `ft_memset`, `ft_memcpy`, `ft_memccpy`, `ft_memmove`, `ft_memchr`, `ft_memrchr`, `ft_memcmp`, `ft_memdel`
- **Strings**: `ft_strlen`, `ft_strnlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strncmp`, `ft_strdup`, `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_split_quotes`, `ft_strmapi`, `ft_strchr`, `ft_strrchr`, `ft_strnstr`
- **Lists**: `ft_lstnew`, `ft_lstlast`, `ft_lstmap`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstsize`
- **File I/O**: `get_next_line`
- **Formatted output**: `ft_printf`, `ft_dprintf`
- **Output functions**: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putnstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

## Tech Stack

- **C** – Core language
- **Makefile** – For easy build and management

## Usage

1. Clone the repository:

```bash
git clone git@github.com:Felipp3san/42-libft.git libft
cd libft
```

2. Compile the library:

```bash
make
```

- This will create `libft.a`.
- Include in other projects by adding:

```make
$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR) $(MAKEFLAGS) all
```

and compile flags:

```bash
-I./libft/include -L./libft -lft
```

## Compilation

- Build the executable:

```bash
make
```

- Remove object files:

```bash
make clean
```

- Remove all binaries and rebuild:

```bash
make fclean
make
```

## Testing

Tested with custom scripts and frameworks such as:

- [libftTester](https://github.com/Tripouille/libftTester)
- [Libftest](https://github.com/jtoty/Libftest)
- [libft-unit-test](https://github.com/alelievr/libft-unit-test)

## License

Educational project under 42 School academic policy.
