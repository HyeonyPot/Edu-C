#include <stdio.h>

double jegop(double down,double chasoo)
{
    int i;
    double result;
    result = down;
    for(i=0;i<chasoo-1;i++)
       result = result * down;
    return result;
}
int shutdowncheckf(char shutdowncheck)
{
    if(shutdowncheck=='y'||shutdowncheck=='Y')
        return 0;
    else
        return 1;
    
}

int main(void)
{
    
    double num1,num2;
    char calctype;
    char shutdowncheck;
    int shutdown=1;
    do
    {
      
    
    
    printf("단항식 계산기\n");
   
    
    scanf("%lf%c%lf",&num1,&calctype,&num2);
    getchar();
    
    if (calctype=='+')
        printf("%.0lf %c %.0lf = %.0lf\n",num1,calctype,num2,num1 + num2);
        
    else if (calctype=='-')
        printf("%.0lf %c %.0lf = %.0lf\n",num1,calctype,num2,num1-num2);
    
    else if (calctype=='*')
        printf("%.0lf %c %.0lf = %.0lf\n",num1,calctype,num2,num1*num2);
    else if (calctype=='x')
        printf("%.0lf %c %.0lf = %.0lf\n",num1,calctype,num2,num1*num2);
    else if (calctype=='X')
        printf("%.0lf %c %.0lf = %.0lf\n",num1,calctype,num2,num1*num2);



    else if (calctype=='/')
        printf("%.0lf %c %.0lf = %.0lf\n",num1,calctype,num2,num1 / num2);
    
    else if (calctype=='%')
        printf("%.0lf %c %.0lf = %.0lf\n",num1,calctype,num2,num1 / num2);
        
    else if (calctype=='^')
        printf("%.0lf %c %.0lf = %.0lf\n",num1,calctype,num2,jegop(num1,num2));
    
    else
        {
            printf("제대로 입력해주세요\n");
            printf("종료하시겠습니까?(Y/N)\n");
            scanf(" %c",&shutdowncheck);
            getchar();
            shutdown = shutdowncheckf(shutdowncheck);
        }
    }
    while(shutdown==1);
    printf("계산기를 종료합니다.\n");
    
    return 0;
}