#include<stdio.h>
int main ( )
{
    int number=0;
    printf("enter a number:");
    scanf("%d",&number);
    switch(number)
    {
    case 10:
        printf("number is equal to10\n");
    case 50:
        printf("number is equal to 50\n");
    case 80:
        printf("number is equal to 80\n");
    default:
        printf("number is not equal to 10, 50 or 80");
    }
    return 0;
}



























