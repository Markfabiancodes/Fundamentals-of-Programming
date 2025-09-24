#include <stdio.h>
int main() {
     int secret=5, guess;
    do { printf("Guess (1-10): "); scanf("%d", &guess); } 
    while(guess != secret);
    printf("Correct!\n");
    
    int age;
    do { printf("Age (1-120): "); scanf("%d", &age); } 
    while(age<1 || age>120);
    printf("Valid age: %d\n", age);
    
    char again;
    do {
        float x,y; char op;
        printf("Enter x op y: "); scanf("%f %c %f", &x, &op, &y);
        if(op=='+') printf("=%.2f\n", x+y);
        else if(op=='-') printf("=%.2f\n", x-y);
        else if(op=='*') printf("=%.2f\n", x*y);
        else if(op=='/' && y!=0) printf("=%.2f\n", x/y);
        printf("Again? (y/n): "); scanf(" %c", &again);
    } while(again=='y');
    
    int pos, count=0; float total=0;
    do { 
        printf("Enter positive num (-1 to stop): "); 
        scanf("%d", &pos); 
        if(pos>0) { total += pos; count++; }
    } while(pos>0);
    if(count>0) printf("Avg=%.2f\n", total/count);
    
    int opt;
    do {
        printf("1.Hi 2.Bye 0.Exit: "); scanf("%d", &opt);
        if(opt==1) printf("Hi!\n");
        if(opt==2) printf("Bye!\n");
    } while(opt != 0);
    
    return 0;
}