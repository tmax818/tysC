/* ex05.c date: 14 june 23*/
#include <stdio.h>
#include <string.h>

int main(){
    char buffer[256];

    printf("Enter your name and press <Enter>:\n");
    gets(buffer);

    printf("\nYour name has %lu chars and spaces!\n", strlen(buffer));

    return 0;
}
/*end of program*/