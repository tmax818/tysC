// illustrates the difference btwn args and params

#include <stdio.h>

float x = 3.5, y = 65.11, z;

float half_of(float k);

int main(){

    // in this call, x is the arg to half_of()
    z = half_of(x);
    printf("The value of z = %f\n", z);

    
    // in this call, y is the arg to half_of()
    z = half_of(y);
    printf("The value of z = %f\n", z);

    
    // in this third call, z is the arg to half_of()
    z = half_of(z);
    printf("The value of z = %f\n", z);

    
    return 0;
}

float half_of(float k){
    return (k/2);
}