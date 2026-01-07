#include<stdio.h>
int main ( )
{
    char c;
    int a,b;
    scanf("%d %c %d",&a,&c,&b);
    float s;
    switch(c)
    {
    case '+':
        s=a+b;
    case '-':
        break;

        s=a-b;
        break;
    case '*':
        s=a*b;
        break;
    case '/':
        s=(float)a/b;
        break;
    default:
        break;
    }
    printf("%d %c %d = %2.f, a,c,b,s");

    return 0;
}
