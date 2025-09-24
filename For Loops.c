#include <stdio.h>
int main() {
    printf("For Loops:\n");
    
    for(int i=1; i<=5; i++) printf("%d ", i);
    printf("\n");
    
    for(int i=2; i<=10; i+=2) printf("%d ", i);
    printf("\n");
    
    for(int i=5; i>=1; i--) printf("%d ", i);
    printf("\n");
    
    for(int i=1; i<=5; i++) printf("3*%d=%d ", i, 3*i);
    printf("\n");
    
    int sum=0;
    for(int i=1; i<=5; i++) sum += i;
    printf("Sum=%d\n", sum);

    return 0;
}