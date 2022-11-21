#include <stdio.h>
#include <stdlib.h>
#include "stat.h"
#include <string.h>
int main()
{   char fileName [5];
    int b ;
    int x=nbElBv(fileName , &b);
    printf("le nombre des electeures de ce bureau de vote est:%d\n",x);
    return 0;
}
