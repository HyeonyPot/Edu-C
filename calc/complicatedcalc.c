#include <stdio.h>
#include <string.h>

double add(double x,double y){return x + y;}
double multiple(double x, double y){return x * y;}
double nanugi(double x, double y)
{
    if(y!=0)
    return x / y;
    else
    printf("나누는수가 0이면 안됩니다.");
    
}

int main(void)
{

char textline[100];
char abcd[4]={"abcd"};


printf("%s\n",abcd);



    return 0;
}