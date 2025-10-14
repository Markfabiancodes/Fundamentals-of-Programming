#include <stdio.h>

int main() {
    int power = 1;
    for (int i = 0; power <= 512; i++) {
        printf("%d ", power);
        power *= 2;
    }
    return 0;
}