# 0x11. C - printf 

## Introduction to the printf function 

The `printf` function in C programming is a standard library function used for formatted output. it enables you to communicate with a program. It is classified under input/output function, or I/0 functions for short. 

`printf()` is an output function (i.e it prints the result of the program to the screen). 

This project is a custom implementation of the `printf` function developed for learning purposes. It was developed by two cohort #19 students: Praise and Olamilekan


## References 

- [all about printf](https://akshatshibu.wordpress.com/2015/07/22/all-about-printf/)
- [Implementing prinf and scanf in c](https://iq.opengenus.org/how-printf-and-scanf-function-works-in-c-internally/)


## Description 

The function `_printf` writes output to stdout. 
 The basic syntax of `printf` is as follows: 

**Prototype:** 

```c 
 int _printf(const char *format,...); 

```

`format:` is a string that defines the format of the output. It can contain format specifiers, which are placeholder for the data you want to print to the output. Format specifiers start with the `%` symbol and are followed by a character indicating the data type to be printed 

(e.g., `%d` for integers, `%f` for floating-point numbers, `%s` for strings). 

`...:` represents a variable number of arguments that match the format specifiers in the `format` string. 

## Return 

Upon success, `_printf` returns the number of characters printed (excluding the terminating null byte used to indicate the end of a string). if an output error is encountered, it returns `-1`. 


## Example usage 

```c
  #include <stdio.h>

  int main() {
    int num = 42; 
    double pi = 3.14159; 
    char message[] = "Hello, World!"; 

    printf("Integer: %d\n", num); 
    printf("Double: %f\n", pi); 
    printf("String: %s\n", message);

    return 0;
  }
```
