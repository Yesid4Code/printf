				II11. C - printf - We write our own printf function.

# Resources

* [Secrets of printf](https://www.cypress.com/file/54761/download)
* [Group Projects](https://intranet.hbtn.io/concepts/111)
* [Flowharts](https://intranet.hbtn.io/concepts/130)

# Requirements

* Formats and programs will be compile with **gcc 4.8.4**
* All files should be compiled with **Ubuntu 14.04 LTS**
* The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called **holberton.h**
* You might want to look at the gcc flag -Wno-format when testing with your _printf and the standard printf
* Main files will include your main header file (holberton.h): #include holberton.h

# In This Project We Should Learn

* printf
* format specifiers

## printf

Is a function nativ3 of the C programming language, used to print a string format. the prototype can be something like this:


~~~
int printf(const char* format,...)
~~~

The string is written in a simple template language. The constant string *format* provides a description of the output which start with a % character, indicate the location and method to translate a piece of data (such as a number) to characters.
e.g:

~~~
printf("Color %s, numbero1 %d, numbero2 %05d, hex %x, real %5.2f.\n", "red", 12345, 69, 555, 3.14);
~~~
The output will be the folowing one (inluding the \n character):

	color red, numbero1 12345, numbero2 00069, hex ff, real 3.14.
The printf function returns the number of characters printed, or a negative value if an error occurs.

The classic Hello world example:

~~~
#include <stdio.h>
 
int main(void)
{
    printf("Hello, world!\n");
    return (0);
}
~~~

## format specifiers
Printf allows to specify format to the output. Here some examples:
 
**Format**	     **Output**

* %d ó %i	     integer in base 10 with (int)sign
                     printf ("integer number in base 10 is: %d" , -10);
* %c	             carácter (char)
* %s	             string od characteres (string) 
print_char

## Diagrams 
[check our diagrams here](https://app.diagrams.net/#G1ugIojgS2L6mXuic1mTNpsQZ2CAtv1wdO)
