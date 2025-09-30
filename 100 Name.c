#include <stdio.h>

int main() {
    char name[] = "Mark Fabian Dumo";
    int i;
    
    for (i = 1; i <= 100; i++) {
        printf("%d. %s\n", i, name);
    }
    
    return 0;
}