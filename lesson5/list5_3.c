/* demonstrate local variables date: 14 june 23*/

#include <stdio.h>

int x = 1, y = 2;

void demo(void);

int main(){
    printf("\nBefore calling demo(), x = %d and y = %d.", x,y);
    demo();
    printf("\nAfter calling demo(), x = %d and y = %d.", x,y);

    return 0;
}

void demo(void){
    int x = 88, y = 99;
    printf("\nWithin demo(), x = %d and y = %d.", x,y);
}