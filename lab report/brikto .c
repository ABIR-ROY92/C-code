#include<stdio.h>
int main ( )
{
    double g,n;
    printf("Total grade :");
    scanf("%if", &g);

    if (g>=7.00){
        printf("admission\n");
    }
    else {
        printf("give test \n");

        scanf("%d",&n);
        if(n>60 && n<=100){
            printf("get admmission \n");
        }
        else if (n==60){
            printf("wating list \n");
        }
        else if(n<60){
            printf("won't get admission\n");
        }
    }

    return 0;
}

