#include <stdio.h>
#include <string.h>
#define passwordsize 15


int strsize(char pw[])
{
    int i;
    for ( i = 0;; i++)
    {
        if(pw[i] == '\0')
        break;                               
    }  
    return i;
}
char *print_error_array(const char *pw,char *temp,const int size)
{
int i,k,f,count;
 

    for(f=0;f<size;f++)//덩어리복사파트//편집점
    {
           
        for(k=0;k<2;k++)//조각복사파트
        {
            temp[k]=pw[k];//
            
        }
    
    
    }    
}

int main(void)
{
    char pw[passwordsize];
    char temp2[passwordsize];
    int pwsize;
    int i,f,k,m;

    scanf("%s",&pw[0]);
    
    char temp[strsize(pw)];
    pwsize=strsize(pw);
    for(i=1;i<=pwsize/2;i++)//덩어리크기결정
    for(f=0;f<pwsize-i;f++)//조각복사위치결정
    {
           
        for(k=0;k<i+1;k++)//조각복사,덩어리크기결정
        {
            temp[k]=pw[k+f+f];//조각복사위치결정
            
        }
        if(strstr(pw,temp)!=NULL)
        {   printf("'");
            for(m=0;m<k;m++)
               printf("%c",temp[m]);
            printf("'");
            printf("\n");
        }
    }
    

    return 0;
}






