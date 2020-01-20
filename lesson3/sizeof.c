/* sizeof.c--Program to tell the size of the C variable */
/*      type in bytes*/

#include <stdio.h>

int main(void)
{
    printf("\nA  char\t\t\tis %ld byte", sizeof(char));
    printf("\nAn unsigned char\tis %ld byte", sizeof(unsigned char));
    printf("\n");
    printf("\nA  short\t\tis %ld bytes", sizeof(short));
    printf("\nAn unsigned short\tis %ld bytes", sizeof(unsigned short));
    printf("\n");
    printf("\nAn int\t\t\tis %ld bytes", sizeof(int));
    printf("\nAn unsigned int\t\tis %ld bytes", sizeof(unsigned int));
    printf("\nA float \t\tis %ld bytes", sizeof(float));
    printf("\n");
    printf("\nA  long\t\t\tis %ld bytes", sizeof(long));
    printf("\nA  long long\t\tis %ld bytes", sizeof(long long));
    printf("\nAn unsigned long\tis %ld bytes", sizeof(unsigned long));
    printf("\nAn unsigned long long\tis %ld bytes", sizeof(unsigned long long));
    printf("\nA double \t\tis %ld bytes", sizeof(double));
    printf("\n");
    printf("\nA long double \t\tis %ld bytes", sizeof(long double));
    printf("\n");
    return 0;
}