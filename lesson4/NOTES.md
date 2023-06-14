# Lesson 4. The Pieces of a C Program: Statements, Expressions, and Operators

## Statements

- statement - a complete instruction that directs the computer to carry out some task.
  - one per line
  - end with a semicolon
  - example

```c
x = 2 + 3;
```

### The Impact of White Space on Statments

- white space
  - C compiler isn't senstive to white space

- string - a series of characters
  - literal string
```c 
"How now brown cow"
```

### Creating a Null Statement

- null statement - a semicolon by itself.
  - teaser, null statements can be useful

### Working with Compound Statments

- compound statement (block) - a group of two or more C statments enclosed in braces.
- example

```c
{
    printf("Hello, ");
    printf("world! ");
}
```
- in C, a block can be used anywhere a single statement can be used.

## Understanding Expressions

- expression - anything that evaluates to a numeric value.
- expressions come in different levels of complexity:
  - **Simple Expressions** - a single item: simple variable, literal constant, or symbolic constant
  - literal constant - evaluates to its own value
  - symbolic constant - evaluates to the value it was given when created 
  - variable - evaluates to the current value assigned by the program
  - **Complex Expressions** - consists of simple expressions connected by operators.

## Operators

- operator - a symbol that instructs C to perform some operation or action on one or more operands
- operand - something an operator acts on. all operands are expressions
  - categories:
    - assignment
    - mathematical
    - relational
    - logical

### The Assignment Operator

- assignment operator - (=)
- example
```c
x = y;
```
- means assign the value of y to x.
- right side can be any expression, left side must be a variable.

```c
variable = expression;
```

the expression is executed and assigned to the variable

### The Mathematical Operators

- unary and binary