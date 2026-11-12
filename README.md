*This activity has been created as part of the 42 curriculum by mghuzlan.*

# Libft

## Description

**Libft** is a C library developed as part of the 42 curriculum. The goal is to recreate a selected set of standard C-library functions and build additional utilities that can be reused in later C projects.

The project practices core C programming skills, including string and memory manipulation, pointer arithmetic, dynamic memory allocation, working with file descriptors, function pointers, and linked lists. Each function is implemented as part of the library and exposed through `libft.h`.

The library is compiled into a static archive named `libft.a`, which can then be linked into other C programs.

## Library contents

The functions are grouped below by purpose. The exact set included in the submitted archive depends on which source files and targets are included in the repository's `Makefile`.

### Character checks and conversions

- `ft_isalpha` — checks whether a value represents an alphabetic character.
- `ft_isdigit` — checks whether a value represents a decimal digit.
- `ft_isalnum` — checks whether a value represents an alphabetic character or digit.
- `ft_isascii` — checks whether a value is in the ASCII range.
- `ft_isprint` — checks whether a value represents a printable character.
- `ft_toupper` — converts a lowercase letter to uppercase when applicable.
- `ft_tolower` — converts an uppercase letter to lowercase when applicable.

### Memory and byte operations

- `ft_memset` — fills a memory region with a byte value.
- `ft_bzero` — sets a memory region to zero.
- `ft_memcpy` — copies a specified number of bytes between non-overlapping memory regions.
- `ft_memmove` — copies bytes while supporting overlapping source and destination regions.
- `ft_memchr` — searches a memory region for a byte value.
- `ft_memcmp` — compares two memory regions byte by byte.
- `ft_calloc` — allocates memory for an array and initializes the allocated bytes to zero.

### String operations

- `ft_strlen` — returns the length of a string, excluding its terminating null byte.
- `ft_strlcpy` — copies a string into a destination buffer with a specified size.
- `ft_strlcat` — appends a string to a destination buffer with a specified size.
- `ft_strchr` — locates the first occurrence of a character in a string.
- `ft_strrchr` — locates the last occurrence of a character in a string.
- `ft_strncmp` — compares up to a specified number of characters from two strings.
- `ft_strnstr` — searches for a substring within a bounded portion of another string.
- `ft_strdup` — allocates and returns a duplicate of a string.
- `ft_atoi` — converts the initial numeric portion of a string to an integer.
- `ft_substr` — allocates a substring beginning at a specified index.
- `ft_strjoin` — allocates a string containing two strings concatenated in order.
- `ft_strtrim` — allocates a copy of a string with specified characters removed from both ends.
- `ft_split` — splits a string into an allocated, null-terminated array of strings using a delimiter character.
- `ft_itoa` — allocates a string representation of an integer.
- `ft_strmapi` — creates a new string by applying a callback to each character and its index.
- `ft_striteri` — applies a callback to each character and its index, allowing the original string to be modified.

### File-descriptor output

- `ft_putchar_fd` — writes one character to a specified file descriptor.
- `ft_putstr_fd` — writes a string to a specified file descriptor.
- `ft_putendl_fd` — writes a string followed by a newline to a specified file descriptor.
- `ft_putnbr_fd` — writes an integer's decimal representation to a specified file descriptor.

### linked-list operations

This section uses the `t_list` structure, which stores a `content` pointer and a `next` pointer to the next node.

- `ft_lstnew` — allocates and initializes a node.
- `ft_lstadd_front` — inserts a node at the beginning of a list.
- `ft_lstsize` — counts the nodes in a list.
- `ft_lstlast` — returns the final node in a list.
- `ft_lstadd_back` — inserts a node at the end of a list.
- `ft_lstdelone` — deletes one node and disposes of its content through a callback.
- `ft_lstclear` — deletes all nodes in a list and resets the head pointer.
- `ft_lstiter` — applies a callback to each node's content.
- `ft_lstmap` — applies a callback to each node's content and creates a separate list from the results.

## Instructions

### Requirements

- A C compiler such as `cc` or `clang`.
- `make` to use the project's build targets.
- The 42 Norminette tool if you need to validate compliance with the coding standard.

### Build the library

From the repository root, run:

```sh
make
```

In a standard Libft setup, this builds the static library `libft.a` from the mandatory source files. If the repository's `Makefile` defines the bonus target, build the linked-list functions with:



Common Makefile targets are:

```sh
make clean   # remove object files
make fclean  # remove object files and the library archive
make re      # clean and rebuild
```

Use the targets actually defined in this repository's `Makefile`; target names and bonus integration can vary by project setup.

### Use the library in another program

Include the public header in your C source file:

```c
#include "libft.h"
```

For example, if `main.c` calls a function from `libft`, compile and link it with the archive:

```sh
cc -Wall -Wextra -Werror main.c -L. -lft -o program
./program
```

This assumes `libft.a` is in the current directory and the relevant function is included in the archive. If the header or archive is stored elsewhere, adjust the include and linker paths accordingly.

### Validate source files

Run Norminette on the relevant source files and header, for example:

```sh
norminette ft_*.c libft.h
```

Compile an individual source file without linking an executable by using `-c`:

```sh
cc -Wall -Wextra -Werror -c ft_striteri.c -o ft_striteri.o
```

To run tests, compile a temporary test program together with the relevant source files, or link the test program against `libft.a`. Temporary test `main()` functions and test-only includes should not be left in the submitted library source files unless the subject explicitly allows them.

## Resources

- [42 Network](https://www.42network.org/) — background on the 42 peer-learning programming curriculum.
- [42 Cursus information](https://42.fr/en/42-programs/42-cursus/) — overview of the 42 Cursus programme. The local project subject and evaluation rules provided by the campus take precedence.
- [C language: pointers — cppreference](https://en.cppreference.com/w/c/language/pointer) — reference for pointer declarations, pointer-to-pointer types, and function pointers.
- [`malloc` and memory allocation — Linux manual pages](https://man7.org/linux/man-pages/man3/free.3.html) — documentation for dynamic allocation and memory release.
- [`strlen` — Linux manual page](https://man7.org/linux/man-pages/man3/strlen.3.html) — reference for C-string length and terminating null bytes.
- [`memcpy` — Linux manual page](https://www.man7.org/linux/man-pages/man3/memcpy.3.html) — reference for copying bytes and the non-overlap requirement.
- [ISO C11 draft (N1570)](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf) — language and standard-library reference material.

### Use of AI

ChatGPT was used as a learning and development aid during this activity. Assistance included explaining C concepts such as pointers, file descriptors, dynamic allocation, callbacks, strings, and linked lists; helping interpret compiler and runtime errors; suggesting and explaining test cases; and reviewing function behavior against those tests.

## Project status

This README describes the intended Libft function set. Before submission, ensure the source files, public prototypes, `Makefile`, and linked archive match the functions actually implemented in the repository, and remove temporary test code from library source files.
