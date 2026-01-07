#include<stdio.h>
int main( )
{
    int m;
    scanf("%d",&m);
    if(m==2){
        printf("This month is 28");
    }
    else if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
        printf("This month is 31 days");
    }
    else if (m=4 || m==6 || m== 9 || m==11){
        printf("This month is 30 days");
    }
    else {
        printf("This month number is invalid");
    }




    return 0;
}
