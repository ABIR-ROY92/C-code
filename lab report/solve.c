#include<stdio.h>
int main ()
{
    float g;
    int n;
    printf("Total grade :");
    scanf("%.1f", &g);

    if (g>=7.00){
        printf("Admission\n");
    }
    else {
        printf("give test\n");

    scanf("%d",&n);
        if(n>=80 && n<=100){
            printf("get admission\n");
        }
        else if (n<80){
            printf("wating list\n");
        }
        else if (n<60){
            printf("won't get admission\n");
        }
    }


    return 0;
}
