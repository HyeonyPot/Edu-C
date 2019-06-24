#include <stdio.h>

int main(void)
{
    int x = 20;
    printf("%d\n",x);
    int *p=&x;
    printf("%d\n",*p);
    *p=10;
    printf("%d\n",*p);
    printf("%d\n",x);
    
    int **pp=&p;
    printf("%d\n",**pp);
    **pp=5;
    printf("%d\n",*p);
    printf("%d\n",x);
    

    return 0;
}
