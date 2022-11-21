#include <stdio.h>
#include <stdlib.h>
#include "TVB.h"
#include <string.h>
int main()
{   char fileName [5];
    int x=tvb(fileName);
    printf("le taux de vote blanc est: %d\n",x);
    return 0;
}
