<div align="center">
<img src="https://humancoders-formations.s3.amazonaws.com/uploads/course/logo/1825/thumb_bigger_formation-langage-c-les-bases.png">
</div>


# HOLBERTONSCHOOL-PRINT

_PRINTF is a custom implementation of the string formatting function in C, similar to the standard printf function in the C library. This function allows you to format and print strings with variable arguments.

# Table of Contents

1. Introduction
2. Requirements
3. Installation
4. Features
5. Usages
6. Authors

# Requirements
## General
- Allowed editors : vi, vim, emacs.
- All your files should end with a new line.
- A README.md file, at the root of the folder of the project is mandatory.
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl.
- You are not allowed to use global variables.
- No more than 5 functions per file.
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation ; do not push your own main.c file. Our main.c files might be different from the one shown in the examples.
- The prototypes of all your functions should be included in your header file called main.h.
- Don’t forget to push your header file.
- All your header files should be include guarded.  
- Note that we will not provide the _putchar function for this project.
# Installation
To integrate _printf into your project, follow these steps :

1. Clone the holbertonschool-printf repository
```bash
https://github.com/Tissem-Ben/holbertonschool-printf.git
```
2.  Navigate into the holbertonschool-printf repository
```bash
cd holbertonschool-printf
```
3. Compile the _printf source file
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```

# Features

In our project, we have incorporated several options that handle the following functions :\
conv_percentage : handles the conversion of % who prints a literal '%' character.\
conv_string : manages the conversion of %s who prints a string.\
conv_char : handles the conversion of %c who prints a single characte.\
get_conversion_func : retrieves the conversion function associated with a format character.\
conv_decimal : manages the conversion of %d who prints a decimal number.\
conv_integer : handles the conversion of %i who prints an integer.


# Usage
here is an example of using our function
```
#include "main.h"

int main(void)
{
  _printf("%s", "C is fun")
}
```
STDOUT output : "C is fun"
```
#include "main.h"

int main(void)
{
  _printf("%c is fun", "C")
}
```
STDOUT output : "C is fun"
```
#include "main.h"

int main(void)
{
  _printf("C is top %d", "1")
}
```
STDOUT output : "C is top 1"
```
#include "main.h"

int main(void)
{
  _printf("C is top %i", "1")
}
```
STDOUT output : "C is top 1"
# Authors

- BENDAHMA Ibtissem <9311@holbertonstudents.com>
- FERHAT Oussama <8874@holbertonstudents.com>
