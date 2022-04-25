#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(){

    printf("SCHAR_MIN\t%d\n",SCHAR_MIN);
    printf("SCHAR_MAX\t%d\n\n",SCHAR_MAX);

    printf("UCHAR_MIN(0)\t%d\n",0);
    printf("UCHAR_MAX\t%d\n\n",UCHAR_MAX);

    printf("SHRT_MIN\t%d\n",SHRT_MIN);
    printf("SHRT_MAX\t%d\n\n",SHRT_MAX);

    printf("USHRT_MIN(0)\t%d\n",0);
    printf("USHRT_MAX\t%d\n\n",USHRT_MAX);

    printf("INT_MIN\t%d\n",INT_MIN);
    printf("INT_MAX\t%d\n\n",INT_MAX);

    printf("UINT_MIN(0)\t%d\n",0);
    printf("UINT_MAX\t%u\n\n",UINT_MAX);

    printf("LONG_MIN\t%ld\n",LONG_MIN);
    printf("LONG_MAX\t%ld\n\n",LONG_MAX);

    printf("ULONG_MIN(0)\t%lu\n",0);
    printf("ULONG_MAX\t%lu\n\n",ULONG_MAX);

    printf("LLONG_MIN\t%lld\n",LLONG_MIN);
    printf("LLONG_MAX\t%lld\n\n",LLONG_MAX);

    printf("ULLONG_MIN(0)\t%lu\n",0);
    printf("ULLONG_MAX\t%lu\n\n",ULLONG_MAX);

    printf("__SCHAR_WIDTH__\t%d\n",__SCHAR_WIDTH__);
    printf("__SHRT_WIDTH__\t%d\n",__SHRT_WIDTH__);
    //printf("USHRT_WIDTH\t%d\n",USHRT_WIDTH);
    printf("__INT_WIDTH__\t%d\n",__INT_WIDTH__);
    //printf("UINT_WIDTH\t%d\n",UINT_WIDTH);
    printf("__LONG_WIDTH__\t%d\n",__LONG_WIDTH__);
    printf("__LONG_LONG_WIDTH__\t%d\n\n",__LONG_LONG_WIDTH__);


    printf("CHAR_BIT\t%d\n",CHAR_BIT);
    printf("CHAR_MIN\t%d\n",CHAR_MIN);
    printf("CHAR_MAX\t%d\n",CHAR_MAX);



    return 0;
}

