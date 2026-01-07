#include<stdio.h>
int main ( )
{
    int x=3, y=5, z=10;
    if(x>y&&x>z){
        printf("x is the large number");
    }
    else if (y>x&&y>z){
        printf("y is the large number");
    }
    else{
        printf("z is the large number");
    }

return 0;
}
