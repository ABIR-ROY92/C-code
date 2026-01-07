#include<stdio.h>
int main ( )
{
    char c;
    scanf("%c",&c);
    switch (c>='a' && c<='z' || c>='A' && c<='Z')
    {
    case 1:
        printf("%c is a alphabet \n",c);
        break;

    default :
        printf("%c is not a alphabet \n",c);
        break;

    }
    return 0;
}
