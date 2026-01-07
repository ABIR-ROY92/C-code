#include<stdio.h>
int main ( )
{
    int n;
    scanf("%d", &n);

    if(n>=50 && n<=100){
        printf("pass\n");
    if(n>=80 && n<=100){
        printf("A+");
    }
    else if (n>=70 && n<80){
        printf("A");
    }
    else if (n>=60 && n<70){
        printf("A-");
    }
    else if (n>=50 && n<60){
        printf("B");
    }
    }
    else if (n<50) {
        printf("fail");
    }
    return 0 ;
}
