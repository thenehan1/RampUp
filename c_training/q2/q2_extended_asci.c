#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>

int main()
{
    printf("Create an extended ASCII table. Print the ASCII values 32 through 255\n");
    unsigned char a = 32;
    printf("CHAR DEC HEX\n");

    while(1)
    {
        printf("%c  %.3d  0x%.2x\n",a,a,a);
        if(a==255)
            break;
        else
            a++;
    }
    
    return 0;
}
