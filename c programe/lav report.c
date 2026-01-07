#include<stdio.h>
int main ( )
{
    int i,j,k;
    scanf("%d%d%d",&i,&j,&k);

    if (i>j && i>k){
        printf(" %d is the largest\n",i);
    }
    else if (j>i && j>k){
        printf(" %d is the largest\n",j);
    }
    else {
        printf(" %d is the largest",k);
    }
    return 0;
}
