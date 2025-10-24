#include <stdio.h>

int main() {
    int num;
    printf("Enter a number to reveal its table: ");
    scanf("%d", &num);

    printf("\nMultiplication Table of %d:\n", num);

    for (int i = 1; i <= 10; i++) {
        printf("%d × %d = %d", num, i, num * i);
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    printf("\nCalculation Complete!\n");
    return 0;
}
