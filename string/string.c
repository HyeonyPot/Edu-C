#include <stdio.h>

int main(void)
{
    char str1[10]="abcdefgab";
    char str2[10];

    int i;
int abc='a';
for ( i = 0; i < 3; i++)
    printf("%d",abc);
printf("%d",abc);
printf("\n");

printf("%s\n",str2);
printf("%s\n",str1);
    for ( i = 0; i < 10; i++)
    {
        str2[i]=str1[i];
    }
printf("%s\n",str2);
    

    return 0;
}