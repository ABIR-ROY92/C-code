#include<stdio.h>
int main ( )
{
    int first, second, N, fibo, i,sum;
    first = 0;
    second =1;
    fibo = 0;
    sum = 0;
    scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
        if(i==N)
        {
            printf("%d=", first);
        }
        else
        {
            printf("%d+", first);
        }
        sum = sum+first;
    fibo = first + second;
    first = second;
    second = fibo;
    }

    printf("%d\n", sum);

return 0;
}
