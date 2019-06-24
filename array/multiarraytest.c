#include <stdio.h>
int main(void)
{
    int array[3][5]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int i,j;
    printf("%d[2][6]\n",array[2][6]);
    printf("%d[3][6]\n",array[3][6]);
    printf("%d[1][1]\n",array[1][1]);
    printf("\n\n\n\n\n\n\n\n\n\n\n");
    for(i=0;i<15;i++)
    for(j=0;j<15;j++)
    printf("%d [%d][%d]\n",array[i][j],i,j);
    return 0;
}