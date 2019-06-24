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
int print_error_array(const char *pw,const int size)
{
int i,j,m,k,l,o,f,count;
char temp[size]; 
int sz=size/2;
    for(i=0;i<size;i++)//i=1
    {
        for(f=0;f<sz;f++)//덩어리복사파트//편집점
        {
        
        for(k=0;k<i+2;k++)//조각복사파트
        {
            temp[k]=pw[i+k+f];//
            count++;
        }
        
        for(o=0;o<size;o+count)//덩어리검사파트
        {
            for(m=0;m<count;m++)//조각검사파트
            if(temp[m]==pw[m+o+count])
            {
                l++;//
            }
            if(l==count)
            {
                printf("'");
                for(m=0;m<count;m++)
                    printf("%c",temp[m]);                
                printf("'\n");
                break;
            }
            else
            l=0;
        }
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
    return i;
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
    char repeatpw[50]={'\0'};
    
    do
    {
    printf("사용할 비밀번호를 입력해주세요.\n");
    scanf("%s",repeatpw);
    
    const pwsize = strsize(repeatpw);
    print_error_array(repeatpw,pwsize);
    if(pwsize<7)
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
    
    
    }
    while(shutdown!=1);
   
    return 0;
}