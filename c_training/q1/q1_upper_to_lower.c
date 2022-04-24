#include <stdio.h>
#include <stdlib.h>
#define MAX_LEN_ARRAY 100

char* upper_to_lower(char* input_string)
{
    char* start = input_string;
    char* p = start;

    while(*p!='\0')
    {
        if(*p>=65 && *p<=90)
            *p+=32;
        p++;
    }
    return start;
}

int main()
{
    printf("Please enter any string...\n");
    char input_string[MAX_LEN_ARRAY];
    int i=0;
    char c;
    c = getchar();
    while(c!=EOF && c!='\n')
    {
        input_string[i++]=c;
        c = getchar();
        if (i==MAX_LEN_ARRAY-1)
            break;
    }
    input_string[i]='\0';
    printf("Converted string is -> %s\n", upper_to_lower(input_string));
}
