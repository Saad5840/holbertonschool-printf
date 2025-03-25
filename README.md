# Custom _printf Function
## Description
This project is a simplified custom implementation of the standard C library function printf. The function _printf writes formatted output to the standard output stream (stdout), handling specific conversion specifiers.

Conversion Specifiers Supported
%c: Prints a single character.

%s: Prints a string of characters. If the input is NULL, (null) is printed.

%%: Prints a literal percent symbol %.

%d, %i: Prints integers (signed decimal format).

Compilation
Use the following command to compile your files:

bash
Copy
Edit
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o _printf
Example Usage
c
Copy
Edit
#include "main.h"

int main(void)
{
    _printf("Hello %s, your score is %d%%\n", "Alice", 85);
    return (0);
}
Output:
csharp
Copy
Edit
Hello Alice, your score is 85%
Files Included
main.h: Contains all function prototypes and necessary includes.

_printf.c: Main implementation of the _printf function.

functions.c: Helper functions handling %c, %s, and %%.

print_numbers.c: Helper function handling %d and %i.

man_3_printf: Manual page describing the _printf function.

Man Page
To read the provided man page, use:

bash
Copy
Edit
man ./man_3_printf
Author
[Saad Alarifi] – Holberton School

License
This project is part of the Holberton School curriculum. All rights reserved.
