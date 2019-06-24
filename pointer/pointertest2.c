#include <stdio.h>

int main(void)
{
    int x[5] = {1,2,3,4,5};
    int y[5] ;
    int *p = x;
    int i;
    for (i=0;i<5;i++)
    printf("%d ",p[i]);
    printf("\n");

p=y;
for ( i = 0; i < 5; i++)
p[i]=x[i];

for ( i = 0; i < 5;i++, p++)
printf("%d ",*p);
printf("\n");

for (i=0;i<5;i++)
    printf("%d ",y[i]);
    printf("\n");

    return 0;
}