#include <stdio.h>
#include <stdlib.h>

void hello(){
    printf("\nHello World");
    }

int square(int no){
    return no*no;
}


int main(){

    hello();
    printf("\nSquare of 56 is %d\n", square(56));
    return 0;
}
