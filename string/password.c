#include<stdio.h>
#define passwordsize 15
#define errorsize 3
void print_error_array(const char *pw,const int size)
{
int i,j,m,l,k;
char temp[errorsize]; 
    for(i=0;i<size-errorsize+1;)
    {
        for(k=0;k<errorsize;k++)
        {
            temp[k]=pw[i];
        }
        for(m=0;m<errorsize;m++)
        { 
            if(temp[m]=='\0')
            break;
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
    int i,j;
    for(i=0;i<size;i++)
    {
        for(j=1+i;j<size-1;j++)
        {
            if(pw[i]==pw[j]);
            { 
               if(pw[i]==pw[++j])    
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
    
    if(pwsize < passwordsize && strsearch(repeatpw,pwsize)==0)
    {    
        printf("사용할수있는 비밀번호입니다.\n");
        shutdown = 1;   
    }
    else if(pwsize < 7 && strsearch(repeatpw,pwsize)==0)
    {
        printf("비밀번호의 크기는 %d자리를 넘을수없습니다.\n",passwordsize);
        printf("현재 %d자리\n",pwsize);
    }
    else if(pwsize < 7 && strsearch(repeatpw,pwsize)==1)
    {
        printf("비밀번호의 크기는 7자리를 넘어야합니다.\n");
        printf("현재 %d자리\n",pwsize);
        printf("연속된 세개의문자를 사용할수없습니다.\n");
        print_error_array(repeatpw,pwsize);
    }
    else if(pwsize < passwordsize && strsearch(repeatpw,pwsize)==1)
    {
        printf("연속된 세개의문자를 사용할수없습니다.\n");
        print_error_array(repeatpw,pwsize);
    }

    else if(pwsize > passwordsize && strsearch(repeatpw,pwsize)==0)
    {
        printf("비밀번호의 크기는 %d자리를 넘을수없습니다.\n",passwordsize);
        printf("현재 %d자리\n",pwsize);
    }
    else
    {
        printf("연속된 세개의문자를 사용할수없습니다.\n");
        print_error_array(repeatpw,pwsize);
        printf("비밀번호의 크기는 %d자리를 넘을수없습니다.\n",passwordsize);
        printf("현재 %d자리\n",pwsize);       
    }
    
    }while(shutdown!=1);
   
    return 0;
}