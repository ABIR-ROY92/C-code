#include<stdio.h>
int main ( )
{
    int x,y;
    scanf("%d %d", &x, &y );
    printf(" swaping value :");

    int tmp=x;
    x=y;
    y=tmp;
    printf("%d %d", x, y);

return 0;
}
