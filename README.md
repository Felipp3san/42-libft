# LIBFT

First project as a student at 42. I was asked to recode a few functions of the C standard library as well as some other utility functions that i will use during the whole cursus. 

## Getting Started

Run the command `make` to create the **libft.a** library file. See the example bellow :
```
cd libft
make
cc -I./include -L./bin/ -lft main.c -o test
```

<br />

In future projects, the libft will be used by placing this libft folder in the projects folder. The libft.a library will be compiled at the same time as the project by adding the following rule to the Makefile :
```
libft:
    make -C libft/
```

As well as the following flags to the compilation of the sources of the project :
```
-I./libft/include -L./libft/bin/ -lft
```

<br />

All available **Makefile** commands :
 - `make clean`       : removes all object files;
 - `make fclean`      : removes all object files and *libft.a*;
 - `make re`          : equals to *make fclean* && *make*;

## Available functions

  - **Characters** - *char/* :
    - `ft_isalpha`     : Checks for an alphabetic character.
    - `ft_isdigit`     : Checks for a digit (0 through 9).
    - `ft_isalnum`     : Checks for an alphanumeric character.
    - `ft_isascii`     : Checks whether 'c' is a 7-bit unsigned char value that fits into the ASCII character set.
    - `ft_isprint`     : Checks for any printable character including space.
    - `ft_islower`     : Checks for a lower-case letter.
    - `ft_isupper`     : Checks for an uppercase letter.


  - **Conversions** - *conv/* :
    - `ft_itoa`               : Converts an integer to string.
    - `ft_atoi`               : Converts the initial portion of the string pointed to by 'nptr' to int. The number is searched after space characters (ft_isspace()) and then signals; ends with a non digit character.
    - `ft_toupper`            : Converts the letter 'c' to upper case, if possible.
    - `ft_tolower`            : Converts the letter 'c' to lower case, if possible.


  - **Lists** - *lst/* :
    - `ft_lstnew`       : Allocates (with malloc(3)) and returns a new element. The variable 'content' is initialized with the value of the parameter. The variable 'next' is initialized to NULL.
    - `ft_lstlast`      : Returns the last element of the list.
    - `ft_lstmap`       : Iterates the list 'lst' and applies the function 'f' to the content of each element. Creates a new list resulting of the successive applications of the function 'f'. The del function is used to delete the content of an element, if needed.
    - `ft_lstadd_front` : Adds the element 'new' at the beginning of the list.
    - `ft_lstadd_back`  : Adds the element 'new' at the end of the list.
    - `ft_lstdelone`    : Takes as a parameter an element and frees the memory of the elements content using the function 'del' given as a parameter and free the element. The memory of next isn't freed.
    - `ft_lstclear`     : Deletes and frees the given element and every successor of that element, using the function 'del' and free(3). Finally, the pointer to the list is set to NULL.
    - `ft_lstiter`      : Iterates the list 'lst' and applies the function 'f' to the content of each element.
    - `ft_lstsize`      : Counts the number of elements in a list.

  - **Memory** - *mem/* :
    - `ft_bzero`      : Sets the first 'n' bytes of the area starting at 's' to zero (bytes containing char '\0').
    - `ft_calloc`     : Allocates memory for an array of 'nelem' elements of size 'elsize' each and returns a pointer to the allocated memory. The memory is set to zero.
    - `ft_memset`     : Fills the first 'n' bytes of the memory area pointed to by 's' with the constant byte 'c'.
    - `ft_memcpy`     : Copies 'n' bytes from memory area 'src' to memory area 'dest'. The memory areas must not overlap.
    - `ft_memccpy`    : Copies no more than 'n' bytes from memory area 'src' to memory area 'dest', stopping when the character 'c' is found.
    - `ft_memmove`    : Copies 'n' bytes from memory area 'src' to memory area 'dest'. The memory areas may overlap.
    - `ft_memchr`     : Scans the initial 'n' bytes of the memory area pointed to by 's' for the first instance of 'c'. Both 'c' and the bytes of the memory area pointed to by 's' are interpreted as unsigned char.
    - `ft_memrchr`    : Is like the ft_memchr() function, except that it searches backward from the end of the 'n' bytes pointed to by 's' instead of forward from the beginning.
    - `ft_memcmp`     : Compares the first 'n' bytes (each interpreted as unsigned char) of the memory areas 's1' and 's2'.


  - **Output** - *put/* :
    - `ft_putchar_fd`   : Outputs the character 'c' to the given file descriptor.
    - `ft_putstr_fd`    : Outputs the string 's' to the given filedescriptor.
    - `ft_putnstr_fd`   : Outputs a max size 'len' of the string 's' to the given file descriptor.
    - `ft_putendl_fd`   : Outputs the string 's' to the given file descriptor, followed by a newline.
    - `ft_putnbr_fd`    : Outputs the integer 'n' to the given file descriptor.


  - **Strings** - *str/* :
    - `ft_strchr`     : Returns a pointer to the first occurrence of the character 'c' in the string 'str'.
    - `ft_strrchr`    : Returns a pointer to the last occurrence of the character 'c' in the string 'str'.
    - `ft_strnstr`    : Locates the first occurrence of the null-terminated string 'needle' in the string 'haystack', where not more than 'n' characters are searched. Characters that appear after a '\0' character are not searched.
    - `ft_strdup`     : Returns a pointer to a new string which is a duplicate of the string 's'.
    - `ft_substr`     : Allocates (with malloc(3)) and returns a substring from the string 's'. The substring begins at 'index' start and is of maximum size 'len'.
    - `ft_strjoin`    : Allocates (with malloc(3)) and returns a newstring, which is the result of the concatenationof 's1' and 's2'.
    - `ft_strtrim`    : Allocates (with malloc(3)) and returns a copy of 's1' with the characters specified in 'set' removed from the beginning and the end of the string.
    - `ft_strmapi`    : Applies the function 'f' to each character of the string 's' to create a new string (with malloc(3)) resulting from successive applications of 'f'.
    - `ft_split`      : Allocates (with malloc(3)) and returns an array of strings obtained by splitting 's' using the character 'c' as a delimiter. The array is ended with a NULL pointer.
    - `ft_strlen`     : Calculates the length of the string 'str', excluding the terminating null byte ('\0').
    - `ft_strnlen`    : Calculates the length, at most 'maxlen' bytes, of the string 's', excluding the terminating null byte ('\0').
    - `ft_strlcpy`    : Copy strings. Takes the full size of the buffer (not just the length) and guarantee to NUL-terminate the result (as long as 'size' is larger than 0). Note that a byte for the NUL should be included in 'size'. The string 'src' must be NUL-terminated. (See *./doc/strlcat_&_strlcpy_explained.pdf*).
    - `ft_strlcat`    : Concatenate strings. Takes the full size of the buffer (not just the length) and guarantee to NUL-terminate the result (as long as there is at least one byte free in 'dst'). Note that a byte for the NUL should be included in 'size'. Both 'src' and 'dst' must be NUL-terminated. (See *./doc/strlcat_&_strlcpy_explained.pdf*).
    - `ft_strncmp`    : Compares the first (at most) 'n' bytes of 's1' and 's2'. It returns an integer less than, equal to, or greater than zero if 's1' is found, respectively, to be less than, to match, or be greater than 's2'.


## Testing

The project was tested with the *test/* files and with the following testers:
 - For some functions:
    - [libftTester](https://github.com/Tripouille/libftTester)
    - [Libftest](https://github.com/jtoty/Libftest)
    - [libft-unit-test](https://github.com/alelievr/libft-unit-test)

## Updating

The project is updated regularly with new functions that could be useful for other projects.

All modifications must respect the [42 norm](https://github.com/42School/norminette/blob/master/pdf/en.norm.pdf).
