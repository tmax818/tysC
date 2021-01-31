//Demonstrates a simple function

#include <stdio.h>

// function prototype, a model for a function that appears later in the program.
long cube(long x);

long input, answer;

int main()
{
    printf("Enter an integer value: ");
    scanf("%ld", &input);
    answer = cube(input);
    /* Note: %ld is the conversion specifier for a long integer */
    printf("\nThe cube of %ld is %ld.\n", input, answer);

    return 0;
}

// Function: cube() - Calculates the cubed value of a variable
// The following is the function definition

long cube(long x)
{
    long x_cubed;

    x_cubed = x * x * x;
    return x_cubed;
}