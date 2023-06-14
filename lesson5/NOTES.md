# Lesson 5: packaging Code in functions

## Understanding functions

- what are functions and how are they used?

### a function Defined

- **function** - a named, independent section of C code that performs a specific task and optionally returns a value to the calling program.

### a function Illustrated

[cube.c](cube.c) 

- local variable - declared within the body of a function

## How a function works

- argument - program data sent to the function

### syntax

### functions

### function prototype

return-type function_name(arg-type name-1 ..., arg-type name-n);

- function prototype - provides the compiler with a description of the function that will be defined at a later point in the program.
- function definition - the actual function

## functions and structured programming

- structured programming - individual program tasks are performed by independent sections of program code.

### advantages of structured programming

- easier to write, complex problems are broken down into smaller, simpler tasks.
- easier to debug

### planning a structured program

### the top-down approach

## writing a function

>The first step in writing a function is to know what you want the function to do.

### the function header

> The first line of every function is the function header which has three components:

1. the function **return type**
    - specifies the data type the function returns to the calling program.
    - return type can be any C data type.

2. the function **name**
    - name a function anything you like
    - must be unique and should indicate what the function does.

3. the **parameter list**
    - *argument*: values passed to the function when they're called
    - you can pass a function any C data type

- *parameter* vs *argument*
  - *parameter*: an entry in a function header; it serves as a placeholder for an argument

### the function body

>The function body is enclosed in braces and immediately follows the function header.

#### local variables

  - >Variables declared in a function are called *local variables*.
  - see [listing 5.3](list5_3.c)

### the function prototype

> A program should include a prototype for each function it uses.

- prototype is identical to header with a semicolon at the end.
- prototype includes info about a functions:
  - return type
  - name
  - parameters
