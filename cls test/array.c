#include<stdio.h>
#define N 3
int main ( )
{
    int x [N];
    int i, sum=0;
    for (i=0; i<N; i++)
    {
        scanf("%d", &x[i]);
    }
    int max;
    max = x [ 0 ];
    for (i=0; i<N; i++)
    {
        if(max <x[i])
        {
            max = x[i];
        }

    }
    printf("\n the max number of the array is = %d\n", max);
    int min;
    min =x[0];
     for (i=0; i<N; i++)
     {
          if(min >x[i])
        {
            min = x[i];
        }
     }
    printf("\n the min number of the array is = %d\n", min);

    for (i=0; i<N; i++)
    {
        printf (" %d", x[ i ] );
        sum += x[ i ];
    }
    printf ("\n total: %d", sum);
    printf ("\n The average of the array is : %.1f",(float) sum/N);

return 0;
}
