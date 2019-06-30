#include<stdio.h>
#define passwordsize 15
#define errorsize 3
void print_error_char(const char *pw,const int size)
{
int i,j,m,l;
char temp[errorsize]; 
    for(i=0;i<size-errorsize+1;i++)
    {
        l=0;
        for(m=0;m<errorsize;m++)
        {
            temp[m]=pw[i];
        }
        for(m=0;m<errorsize;m++)
        { 
           
            if(temp[m]==pw[i+m])
            l++;
            
            else if(temp[m]=='\0')
            break;
            if(l==3)
            {
                printf("'");
                for(j=0;j<errorsize;j++)
                {
                    printf("%c",pw[i+j]);
                }
                printf("'\n");
                break;
            }
        }
    }
   
}
void print_error_array(const char *pw,const int size)
{
int i=0,m=0,k=0,l=0,f=0,count=0;
char temp[size]; 
int sz=size/2;
int cord=0;

    for(i=1;i<=size/2;i++)//덩어리크기결정
    {   cord = size % i; 
        for(f=0;f<size-cord-1;f++)//조각복사위치결정
        {
            l=0;
            count=0;
            for(k=0;k<i+1;k++)//조각복사,덩어리크기결정
            {
                temp[k]=pw[k+f+i-1];//조각복사위치결정
                count++;
            } printf("'");
                for(m=0;m<k;m++)
                    printf("%c",temp[m]);                
                printf("'\n");
             
            /* for(m=0;m<k;m++)//조각검사파트
              {if(temp[m]==pw[m+f+k])
                    l++;
              }
            
            if(l==k)
            {
                printf("'");
                for(m=0;m<k;m++)
                    printf("%c",temp[m]);                
                printf("'\n");
                
                
            }
             */
            
        }
        
    }    
        
    
    
}
void printarray(const char pw[])
{
    int i;
    for(i=0;i < passwordsize;i++)
    printf("%c",pw[i]);
    printf("\n");
}
int strsize(char pw[])
{
    int i;
    for ( i = 0;; i++)
    {
        if(pw[i] == '\0')
        break;                               
    }  
    return i+1;
}

int strsearch(const char *pw,const int size)
{
int i,m,l;

char temp[errorsize]; 
    for(i=0;i<size-errorsize+1;i++)
    {
        l=0;
        for(m=0;m<errorsize;m++)
        {
            temp[m]=pw[i];
        }
        for(m=0;m<errorsize;m++)
        { 
           
            if(temp[m]==pw[i+m])
            l++;
            
            else if(temp[m]=='\0')
            break;
            if(l==3)
            {
               return 1;
            }
        }
    }
   return 0;
}



int main(void)
{
    int shutdown=0;
    int pwsize;
    char repeatpw[50];
    
    do
    {
    printf("사용할 비밀번호를 입력해주세요.\n");
    scanf("%s",repeatpw);
    
    pwsize = strsize(repeatpw);
    print_error_array(repeatpw,pwsize);
    /* if(pwsize<7)
    {
        if(strsearch(repeatpw,pwsize)==0)
        {
        printf("비밀번호의 크기는 7자리 이상이어야 합니다.\n");
        printf("현재 %d자리\n",pwsize);
        }
        else if(strsearch(repeatpw,pwsize)==1)
        {
        printf("비밀번호의 크기는 7자리 이상이어야 합니다.\n");
        printf("현재 %d자리\n",pwsize);
        printf("연속된 세개의문자를 사용할수없습니다.\n");
        print_error_char(repeatpw,pwsize);
        
        }
    }
    else if(pwsize>=7)
    {
       if(pwsize < passwordsize && strsearch(repeatpw,pwsize)==0)
        {    
        printf("사용할수있는 비밀번호입니다.\n");
        shutdown = 1;   
        }
    
        else if(pwsize < passwordsize && strsearch(repeatpw,pwsize)==1)
        {
        printf("연속된 세개의문자를 사용할수없습니다.\n");
        print_error_char(repeatpw,pwsize);
        
        }

        else if(pwsize > passwordsize && strsearch(repeatpw,pwsize)==0)
        {
        printf("비밀번호의 크기는 %d자리를 넘을수없습니다.\n",passwordsize);
        printf("현재 %d자리\n",pwsize);
        
        }
        else
        {
        printf("연속된 세개의문자를 사용할수없습니다.\n");
        print_error_char(repeatpw,pwsize);
        
        printf("비밀번호의 크기는 %d자리를 넘을수없습니다.\n",passwordsize);
        printf("현재 %d자리\n",pwsize);       
        } 
    
    
    } 
    
    */
    }
    while(shutdown!=1);
   
    return 0;
}
