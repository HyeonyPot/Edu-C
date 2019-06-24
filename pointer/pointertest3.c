#include <stdio.h>

int main(void)
{
    int a=5;
    int b,c,d,e;
    int (*p)[5]=NULL;
       b=*p+1;
       c=a-b;
    printf("%d",c);
    

    return 0;
}