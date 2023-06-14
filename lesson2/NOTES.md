# Lesson 2. The Components of a C Program

## A Short C Program

- [bigyear.c](bigyear.c)
- a *function* - an independent section of program code that performs a certain task and has been assigned a name.
- Two types of C functions:
  - library functions - part of the C compiler package
  - user-defined functions - programmer created.

## The Program's Components

### The main() Function

- the only required component
- ANSI says to add void
- ANSI says the only have to have the return statement

### The `#include` and `#define` Directives

- `#incude` instructs the C compiler to add contents of an *include file* in your program during compilation
- *include files* should have an .h extension
- `#include <stdio.h>` = "add the contents of the file stdio.h"
- `#define` instructs the C compiler to replace a specific term with its assigned value throughout your program.

### The Variable Definition

- *variable* a name assigned to a location in memory used to store info
- variable definiton informs the compiler of the variable's name and type
  
### The Function Prototype

- *function prototype* - provides the C compiler with name and parameters of the  functions contained in the program.
- appears before the function is used
- different from *function definition* see below

### Program Statements

- real work is done by statements
- statements
  - read input
  - display output
  - do math
  - call functions
  - read disk fiels
  - etc
- one per line and end with a (;)

#### The `printf()` Statement

- library funtion that displays info onscreen

#### The `scanf()` Statement

- library function that reads data from keyboard and assigns it to a program variable

#### the `return` Statment

- not much here

### The Function Definition

- same as above

### Program Comments

- large programs need them

## A Review of the Pars of a Program

- [list_it.c](list_it.c)
- this is some crazy shit!!!
- It is pretty cool!

## Summary

- short lesson

## Q & A

- What are the effect of comments?
  - comments(and white space) are thrown away by the compiler, do not effect speed
  - only make source file bigger
- Statement vs block?
  - block is a group of statements in braces, blocks can be used where statements are used.
- What library functions are available?
  - online docs for compiler
  - appendix C of this book, read it bro!

## Exercises

- [ex02-02.c](ex02-02.c)


