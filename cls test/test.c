#include<stdio.h>
int main ()
{
    int n,val,sum=0;
    scanf("%d",n);
    while(n !=0)
    {
        val=n%10;
        sum=sum+val;
        n=n%10;
    }

    return 0;
}
