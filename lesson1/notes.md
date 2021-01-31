# Lesson 1. Getting Started with C

## A Brief History of the C Language

- created at Bell Telephone Lab in 1972 by Dennis Ritchie
- purpose was to design UNIX OSes
- American National Standards Institute (ANSI) formed a committee in 1983 establish standard definition of C
- C came after B language

## Why Use C?

- it's powerful and flexible. "What you can accomplish with C is limited only by your imagination"
- it's popular
- it's portable
- it's a language of few words
- it's modular
- C++ is a superset of C, C++ contains everything that C does.
- carries over to Java, C++ and C#

## Prepare to Program

- problem solving steps
  - define the problem
  - devise a plan
  - implement the plan
  - test the plan's effect
- Program creation steps:
  - determine programs objectives
  - methods used in writing the program
  - create the program
  - run the program

## The Program Development Cycle

- use an editor to create a disk file containing your source code
- compile the source code to create an object file
- link the compiled code to create an executable
- run the program to test it

### Creating the Source Code

- *source code* - a series of statements or commands used to instruct the computer to perform your wanted tasks
- example
~~~c
printf("Hello, Mom!");
~~~

#### Using an Editor

- IDE
- use vim
- could use a word processor, I guess
- give file a .c extension
- could use any extension, but use .c

### Compiling the Source Code

- must be translated from source code to machine language
- this is performed by a compiler
- compiler creates machine language instructions called *object code* in a disk file called an *object file*
- This book covers ANSI Standard C
- run `man cc` for info on the compiler

## Linking to Create an Executable File

- *library function* - functions that perform frequently needed tasks
- *executable* - the program can be run
- *linking* - a linker links the object file with any library functions included in the source code.

## Completing the Development Cycle

- most compilers do both compiling and linking

### The C Development Cycle

1. use an editor to write source code.
2. compile the program
3. link the program using a linker
4. execute the program

## Your First C Program

- [hello.c](hello.c)
- it says, "Hello, World!"

## Entering and Compiling hello.c

- it worked!

### Compilation Errors

- occurs when the compiler finds something in the source code that it can't compile.
- remove the semicolon and recompile
- error line numbers are not always correct

### Linker Error Message

- rare and result from misspelling library function names

## Summary

- C is a good choice
- steps in writing a C program
- errors are unavoidable.

## Q & A

