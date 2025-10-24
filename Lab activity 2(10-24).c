#include <stdio.h>

int main() {
    printf("Even Number Symphony\n");
    
    for (int i = 0; i <= 5; i++) {
        int even = i << 1;
        printf("%d", even);
        for (int j = 0; j <= even; j += 2) {
        }
        printf("\n");
    }

    printf("\nEven Magic Complete!\n");
    return 0;
}

