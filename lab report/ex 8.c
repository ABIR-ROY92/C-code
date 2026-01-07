#include<stdio.h>
int main( )
 {
    int n, i =1, sum=0;
    scanf("%d", &n);

    while (i<=n) {
        sum += i;
        if (i<n){
            printf("%d+", i);
        }
        else if (i==n){
            printf("%d=",i);
        }
        i++;
    }
    printf("%d\n", sum);
return 0;
}
