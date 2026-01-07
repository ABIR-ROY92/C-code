#include<stdio.h>
int main ( )
{
   int x,y;
   printf("enter first value:");
   scanf("%d",&x);

   printf("enter second value:");
   scanf("%d",&y);

   if(x>y)
    printf("large %d",x);
   else if(x<y)
    printf("large %d",y);
   else
    printf("number is equal");





   return 0;
}


