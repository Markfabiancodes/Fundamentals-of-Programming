#include <stdio.h>

int main() {
    printf("The Wave of Tens\n");

    for (int i = 1; i <= 10; i++) {
        int value = (i << 3) + (i << 1);
        printf("%3d", value);
        for (int j = 0; j < i; j++) {
            printf("~");
        }
        printf("\n");
    }

    printf("\nBinary Magic Complete!\n");
    return 0;
}

