#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>

void factorial_function1(int no, long* p_fact){

    *p_fact = 1;
    for(int i=1; i<=no; i++)
        *p_fact*=i;

}

void factorial_function2(int no, long* p_fact){
    *p_fact *= no;
    if(no-1==1)
        return;
    else
        factorial_function2(no-1,p_fact);
}

int main()
{
    long fact;

    factorial_function1(11,&fact);
    printf("factorial of 11 is %ld\n",fact);

    fact = 1;
    factorial_function2(12,&fact);
    printf("factorial of 12 is %ld\n",fact);
}
