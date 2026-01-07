/*
// write a program that prints an integer number , floating, double and character
*/
#include<stdio.h>
int main( )
{
   int num1=20 ;
   int num2=30;
   int num3=40, num4=50;
   printf ("Number is %d\n", num1) ;
    printf ("Number is %d\n", num2) ;
     printf ("Numbers are %d,%d\n", num3,num4) ;

     float num5=10.5;
     double num6= 10.5578;
     char ch='a';
     printf ("num1=%.1f\n",num5);
     printf ("num2=%lf\n",num6);
     printf ("ch=%c\n",ch);

// write a programe that takes an integer and print that number
    int num;
    printf("please enter an integer = ");
    scanf("%d", & num);
    printf(" You have pressed : %d\n",num);
// write a programe that takes an integer number
        int num8, num9;
        printf("Enter first integer : ");
        scanf("%d",&num8);

       printf("Enter second integer : ");
        scanf("%d",&num9);
        printf("Numbers are: %d %d\n " ,num8,num9);

         int num11, num12;
        printf("Enter two integers : ");
        scanf("%d %d",&num11, &num12);
getch( );
}
