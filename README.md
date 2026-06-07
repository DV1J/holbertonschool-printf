# Printf Project

This is a custom version of the "printf" function from the C library. Our project file name is "out_printf.c". It prints a string of text according to the format string and conversion specifiers

## Files and Directories contained in Project

* holbertonschool-printf - Project directory
* char_helper.c /  digit_helper.c / _putchar.c - Helper files
* main.h - Header file
* our_printf.c - Project file
* test - Test directory
* main.c - Test main.c

## Conversion specifiers supported / used in the project

* %c - is used to print a character.
* %s - is used to print a string.
* % - is used to print the percentage sign.
* %d / %i  - is used to print signed integer

## Prototype

* int _printf(const char *formet, ...);

## How our_printf.c file works

The function goes through the format string one character at a time.
When the function finds a "%" it looks at the rest of the string for special characters.

### Special characters & what happends wheb they are found

* c - the function prints out a Char character
* s - the function prints out a string
* d / i - the function prints out digits
* %% - if only a "%" is found the function will print "%"

if non of the special characters are found like for example "%x"
the funtion will print out "%x" instead of the value it represents.
At the end the function returns the number of characters printed.

## Installation & Compilation

Clone repository:

git clone https://github.com/DV1J/holbertonschool-printf.git
cd holbertonschool-printf

How to compile the code:

 gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c test/*.c -I.

 who it works

 * -Wno-format - tells the compiler to turn off all warnings about format strings 
 * "*.c" - tells the compiler to compile for all files that ends with .c
 * test/*.c - tells compiler to also take the files that end with .c in the test directory
 * -I. - tells the comipler to where to look for the header file and the "." at the end tells it to look in the current directory
## Authors

 * Dvij Purmanund - https://github.com/DV1J
 * Luvishta Tengur - https://github.com/luvishta
