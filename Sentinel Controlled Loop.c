#include <stdio.h>
int main() {
    int num;
      int total=0;
    printf("Enter numbers (-1 to stop): ");
    scanf("%d", &num);
    while(num != -1) { total += num; scanf("%d", &num); }
    printf("Sum=%d\n", total);
    
    int pass;
    printf("Enter password: ");
    scanf("%d", &pass);
    while(pass != 1234) { printf("Wrong: "); scanf("%d", &pass); }
    printf("Access granted!\n");
    
    int choice=0;
    while(choice != 3) {
        printf("1.Hello 2.World 3.Exit: ");
        scanf("%d", &choice);
        if(choice==1) printf("Hello\n");
        if(choice==2) printf("World\n");
    }
    
    int val;
    printf("Enter values (0 to stop): ");
    scanf("%d", &val);
    while(val != 0) { printf("Got: %d\n", val); scanf("%d", &val); }
    
    char resp='y';
    while(resp=='y'||resp=='Y') {
        float c,f;
        printf("Celsius: "); scanf("%f", &c);
        f = (c*9/5)+32;
        printf("%.1fC = %.1fF\n", c, f);
        printf("Again? (y/n): "); scanf(" %c", &resp);
    }
    
    return 0;
}