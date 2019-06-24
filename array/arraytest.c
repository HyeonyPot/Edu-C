#include <stdio.h>

int main(void)
{
    int x[3][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int y[3]={1,2,3};
    int (*p)[5] = &x[4];
    int i;
    
    for (i=0;i<15;i++)
    printf("%d\n",p[i]);
    printf("\n");


    return 0;
}