*This project has been created as part of the 42 curriculum by amoufakk.*

# ft_printf

## Description
The **ft_printf** project is a custom implementation of the standard C library function `printf`. The goal of this project is to recreate the formatting capabilities of `printf` while learning about variadic functions in C. This implementation supports a variety of format specifiers and handles basic output to the standard output.

### Supported Specifiers
- `%c`: Prints a single character.
- `%s`: Prints a string.
- `%p`: Prints a pointer address in hexadecimal format.
- `%d`: Prints a decimal (base 10) number.
- `%i`: Prints an integer in base 10.
- `%u`: Prints an unsigned decimal (base 10) number.
- `%x`: Prints a number in hexadecimal (base 16) lowercase format.
- `%X`: Prints a number in hexadecimal (base 16) uppercase format.
- `%%`: Prints a percent sign.

## Instructions

### Compilation
The project includes a `Makefile` that compiles the source files into a static library named `libftprintf.a`.

To compile the library, run:
```bash
make
```

To remove object files:
```bash
make clean
```

To remove object files and the library:
```bash
make fclean
```

To recompile everything:
```bash
make re
```

### Usage
To use `ft_printf` in your project, include the header file and link against the compiled library:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s! The answer is %d.\n", "world", 42);
    return (0);
}
```

When compiling your program, add the library:
```bash
cc main.c -L. -lftprintf -o my_program
```

## Technical Details

### Algorithm
The core of `ft_printf` relies on a loop that iterates through the format string. When a `%` character is encountered, the function identifies the subsequent character as a format specifier. It then uses a dispatcher function (`ft_parse_format`) to call the appropriate specialized printing function for that type.

Variadic arguments are handled using the `va_list`, `va_start`, `va_arg`, and `va_end` macros from `<stdarg.h>`. This allows the function to accept an arbitrary number of arguments corresponding to the format specifiers in the string.

### Data Structures
Strictly speaking, the project doesn't use complex data structures. It primarily uses:
- **`va_list`**: To manage the variable number of arguments.
- **Buffers/Strings**: Standard character pointers for string manipulation and output.
- **Base Conversion**: Iterative or recursive logic to convert integers to different bases (decimal, hexadecimal) without using large memory structures.

## Resources
- [Variadic Functions in C - GeeksforGeeks](https://www.geeksforgeeks.org/variadic-functions-in-c/)
- [`printf` Function Documentation](https://en.cppreference.com/w/c/io/fprintf)

### AI Usage Disclosure
AI was used in this project for the following tasks:
- **Refactoring and Optimization**: Assistance in streamlining the dispatcher logic and improving code readability.
- **Documentation**: Generation of this `README.md` and technical explanations.
