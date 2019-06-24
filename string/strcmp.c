#include <stdio.h>
int strcmpnew(const char *str1,const char *str2)
{
    int i;
    for(i=0;;i++)
    {
        if (str1[i]=='\0'||str2[i]=='\0')
        break;

        else if(str1[i]==str2[i])
        continue;
        
        else
        {
            printf("%d번째자리가 다릅니다.\n",++i);        
            return 0;        
        }
    }
    printf("%d번째자리까지같습니다.\n",i);
    return 1;
}

int main(void)
{
    char string1[100]="abcdefwerdfwrdsfwwewerwerwd";
    char string2[100]="abcdefwerdfwwogjwoj";
    int strsize;

    
    strcmpnew(&string1[0],&string2[0]);

    return 0;
}