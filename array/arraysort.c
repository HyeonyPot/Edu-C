#include <stdio.h>
int main(void)
{
    int a[15]={15,13,12,3,5,6,2,1,7,11,14,8,9,10,4};
    int i,j;
    int temp,indextemp;
    
    printf("정렬전 : ");
    for(i=0;i<15-1;i++)
    printf("%d, ",a[i]);
    printf("%d",a[14]);
    printf("\n");
    
    for(i=0;i<15-1;i++)
    {
        indextemp=i;
        for(j=i+1;j<15;j++)
            if(a[indextemp]<a[j])
                indextemp=j;
        if(indextemp != i)
        {
            temp = a[i];
            a[i]=a[indextemp];
            a[indextemp]=temp;
        }
    }
    printf("정렬후 : ");
    for(i=0;i<15-1;i++)
    printf("%d, ",a[i]);
    printf("%d",a[14]);
    printf("\n");
    return 0;
}