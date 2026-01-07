// fine the size of int, float, double and char data type
#include<stdio.h>
int main ( )
{
    int i;
    float f;
    double d;
    char c;

    printf("size of int =%d bytes\n",sizeof (i) );
    printf("size of float =%d bytes\n",sizeof (f) );
    printf("size of double=%d bytes\n",sizeof (d) );
    printf("size of char =%d bytes\n",sizeof (c) );
// find a character of ascii value
        int n;
        printf(" Enter any Ascii value: ");
        scanf("%d",&n);

        printf(" The ASCII character is: %c\n ",n);

        char ch;
        printf("Enter any character: ");
        scanf("%c", &ch);

        printf("The ASCII value = %d\n",ch);

// conversion from lowercase to upppercase without libary function

    char lower;
    printf(" Enter any lowercase letter: ");
    scanf ("%c", &lower); //a=97

    printf("The uppercase latter: %c",lower-32 ); //B=66


    char upper;
    printf(" Enter any uppercase letter: ");
    scanf ("%c", &upper); //A=65

    printf("The lowercase latter: %c",upper+32 ); //a=97

getch ( );
}
