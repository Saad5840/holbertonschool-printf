# Custom _printf Function

## Description
This project is a custom implementation of the C standard library function `printf`. The `_printf` function outputs formatted text to the standard output (`stdout`), supporting specific format specifiers.

## Supported Format Specifiers
| Specifier | Description                                 | Example                     |
|-----------|---------------------------------------------|-----------------------------|
| `%c`      | Prints a single character.                  | `_printf("%c", 'A');`       |
| `%s`      | Prints a string. Prints `(null)` if `NULL`. | `_printf("%s", "Hello");`   |
| `%%`      | Prints the `%` character.                   | `_printf("%%");`            |
| `%d`, `%i`| Prints integers (signed decimal notation).  | `_printf("%d", 42);`        |

## Compilation
Compile your project using the following command:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o _printf

## Files Included
- `main.h`: Header file containing prototypes and necessary includes.
- `_printf.c`: Main implementation of the `_printf` function.
- `functions.c`: Helper functions handling `%c`, `%s`, and `%%`.
- `print_numbers.c`: Helper function for handling `%d` and `%i`.
- `man_3_printf`: Manual page describing the usage of `_printf`.

## Viewing the Man Page
To view the manual page for `_printf`, use the following command:

```bash
man ./man_3_printf

## Author
Saad Alarifi