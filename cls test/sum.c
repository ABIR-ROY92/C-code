#include <stdio.h>
int main()
{
    sum(10, 5, 2);
    sum(15, 20, 1);
    sum(30, 40, 1);


}

void sum(int a, int b, int c)
 {
    printf("the sum is : %d\n", a + b + c);
    printf("the sub is : %d\n", a - b - c);
    printf("the multi is : %d\n", a * b * c);
}
