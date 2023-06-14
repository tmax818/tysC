# Lesson 3. Storing Information: Variables and Constants

## Understanding Your Computer's Memory

- understanding computer memeory helps understand C
- 1GB = 1024MB
- 1MB = 1024KB
- 1KB = 1024 bytes
- 4GB = 4,294,967,296 bytes of RAM 
- *byte* - fundamental unit of data storage.

|Data|Bytes Required|
|---|---|
|The letter x|1|
|The number 500|2|
|The number 241.105|4|
|The phrase Sam's Teach Yourself C|21|
|One typewritten page|~3,000|

- RAM is organized sequentially
- each byte has a unique address to identify it
- *data* - the info your C program works with 

## Storing Information with Variables

- *variable* - a named data storage location in your computer's memory
- using a variables name refers to the data stored there.

### Variable Names

- rules:
  - letters, numbers and _
  - first char must be a letter, can be _ but don't
  - case sensitive
  - no keywords
- compiler looks at only the first 31 chars, but walk the line between descriptive and brief
- camelCase is popular

### Numeric Variable Types

- two main categories
  - integer - no fractional part
    - signed, hold positive and negative values
    - unsigned, hold only positive values
  - floating-point - real numbers

|Variable Type|Keyword|Bytes Required|Range
|---|---|---|---|
Character|char|1|-128 to 127
Short Integer|short|2|-32767 to 32767
Integer|int|4|-2,147,483,647 to 2,147,483,647|
Long Integer|long|4|-2,147,483,647 to 2,147,483,647|

TABLE NOT COMPLETE

- [sizeof.c](sizeof.c) I organized the output by size.

## Variable Declarations

- tells the compiler the name and type of variable
- `typename varname`
- `typename` specifies the variable type and must be a keyword
- `varname` is the variable name

## The `typedef` Keyword

- used to create a name for an existing data type.
- it creates a synonym
- see [lesson 11](../lesson11/notes.md)

## Initializing Variables

- declaring a variable instructs the compiler to set aside storage space. That space could contain "garbage"
- initializing puts a known value in the storage space.

## Constants

- Two types:
  - Literal constants - typed into source code when needed.
  - example:

```c
int count = 20;
```

  - Symbolic constants - represented by a name(symbol) in your program

```c
#define CONSTNAME literal

#define PI 3.14159
```

### How a `#define` Works

- instructions to the compiler: "in the source code, replace **CONSTNAME** with *literal*

## Defining Constants with the `const` Keyword

- This is the second way to define a symbolic constant
- `const` is a modifier that can be applied to any variable declaration
- example

```c
const int count = 100;
```