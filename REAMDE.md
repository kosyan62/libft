# Libft — Standard C Library Implementation

Libft is a personal C library developed as part of the **42 School** curriculum. The purpose of this project is to recreate a set of commonly used C standard library functions from scratch, with strict constraints and coding standards.

This library serves as a foundational toolkit for future C projects, focusing on memory manipulation, string operations, linked list utilities, and basic input/output functions.

---

## Project Overview

* **Language:** C
* **Main Focus:** Low-level memory operations, string manipulation, linked lists, custom utility functions
* **Objective:** Build a reusable static library (`libft.a`) containing essential C functions for use in future projects.

---

## Features

### Standard C Library Reimplementations

Re-coded versions of standard C functions (with the `ft_` prefix):

#### Memory Functions:

* `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memccpy`, `ft_memmove`
* `ft_memchr`, `ft_memcmp`

#### String Functions:

* `ft_strlen`, `ft_strdup`, `ft_strcpy`, `ft_strncpy`, `ft_strcat`
* `ft_strncat`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`
* `ft_strstr`, `ft_strnstr`, `ft_strcmp`, `ft_strncmp`

#### Character Checks & Conversions:

* `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
* `ft_toupper`, `ft_tolower`

#### Miscellaneous:

* `ft_atoi`

---

### Additional Utility Functions

* Memory Management: `ft_memalloc`, `ft_memdel`
* String Allocation & Modification:
  `ft_strnew`, `ft_strdel`, `ft_strclr`, `ft_striter`, `ft_striteri`
  `ft_strmap`, `ft_strmapi`, `ft_strequ`, `ft_strnequ`
  `ft_strsub`, `ft_strjoin`, `ft_strtrim`, `ft_strsplit`
* Numeric Conversion: `ft_itoa`
* Output Functions: `ft_putchar`, `ft_putstr`, `ft_putendl`, `ft_putnbr` (with `_fd` variants for file descriptors)

---

### Bonus: Linked List Utilities

Custom linked list structure:

```c
typedef struct s_list
{
    void            *content;
    size_t          content_size;
    struct s_list   *next;
} t_list;
```

Linked list manipulation functions:

* `ft_lstnew`, `ft_lstdelone`, `ft_lstdel`, `ft_lstadd`, `ft_lstiter`, `ft_lstmap`

---

## Installation & Usage

Clone the repository:

```bash
git clone https://github.com/kosyan62/libft.git
cd libft
```

Build the static library:

```bash
make
```

This will generate the `libft.a` library.

### Available Makefile Targets:

| Target   | Description                     |
| -------- | ------------------------------- |
| `all`    | Compile the library             |
| `clean`  | Remove object files             |
| `fclean` | Remove object files and library |
| `re`     | Recompile from scratch          |

---

## Coding Standards

This project adheres to the **42 Norm**:

* No forbidden functions (only `malloc`, `free`, and `write` allowed).
* Strict memory management (no leaks or undefined behavior).
* Static functions for internal helpers.
* Modular and well-structured code.

---

## License

This project is developed as part of the 42 School curriculum and is intended for educational purposes.
