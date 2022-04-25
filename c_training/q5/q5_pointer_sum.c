#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array_length = 10;
    int array[] = {10,34,123,123,1234,4123,123,12545,3456,346};
    long sum = 0;
    long* p_sum = &sum;
    
    for(int i=0; i<array_length; i++)
        *p_sum += *(array+i);

    printf("array sum is %ld\n",*p_sum);
}
