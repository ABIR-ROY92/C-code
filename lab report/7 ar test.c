#include <stdio.h>

int main() {
    float m;
    int n;

    printf("Total grade: ");
    scanf("%f", &m);

    if (m >= 7.00) {
        printf("Admission\n");
    } else {
        printf("Give test\n");

        printf("Enter test score: ");
        scanf("%d", &n);

        if (n >= 80 && n <= 100) {
            printf("Get admission\n");
        } else if (n >= 60 && n < 80) {
            printf("Waiting list\n");
        } else {
            printf("Won't get admission\n");
        }
    }

    return 0;
}
