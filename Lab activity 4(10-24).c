#include <stdio.h>

int main() {
    int power = 1;

    printf("====================================\n");
    printf("       Powers of 2 up to 512        \n");
    printf("====================================\n\n");

    printf("Exponent | Value\n");
    printf("-----------------\n");

    for (int i = 0; power <= 512; i++) {
        printf("   2^%-2d | %3d\n", i, power);
        power *= 2;
    }

    printf("\n====================================\n");
    printf("      End of Power Calculation      \n");
    printf("====================================\n");

    return 0;
}
