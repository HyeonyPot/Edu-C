#include <stdio.h>
int main(void)
{
    int a[] = {6,214353,535,4743,6363,654,34623,6324};
    int b = 5;
    int *pa = a;
    int *pb = &b;
    int c;
    printf("a = %d , *pa = %d\n",a[0],*pa);
    printf("b = %d , *pb = %d\n",b,*pb);
    
    printf("%d\n",*pa);
    ++(*pa);
    printf("%d\n",*pa);
    printf("\n\n\n\n%d\n\n\n\n\n",++(*pa));
    printf("%d\n",*pa);
    for(c=0;c<9;c++)
    printf("\n%d[%d]\n",a[c],c);

    return 0;
}