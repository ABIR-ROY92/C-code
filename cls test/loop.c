#include<stdio.h>
int main ( )
{
    int i,n,sum=0;
    i=1;
    scanf("%d",&n);
    while(i<=n)
    {
        if(i==n)
        {
            printf("%d=",i);
        }
        else
        {
            printf("%d+",i);
        }
        sum+=1;
        i++;
    }
    printf("%d",sum);

    return 0;
}
