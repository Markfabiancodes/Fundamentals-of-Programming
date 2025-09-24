#include <stdio.h>
int main() {
    int n=5, fact=1, i=1;
    while(i<=n) { fact *= i; i++; }
    printf("5! = %d\n", fact);
    
    int num=1234, rev=0;
    while(num>0) { rev = rev*10 + num%10; num /= 10; }
    printf("Reverse: %d\n", rev);
    
    int a=0, b=1, count=0;
    while(count<8) { printf("%d ", a); int next=a+b; a=b; b=next; count++; }
    printf("\n");
    
    int base=3, exp=4, res=1, p=0;
    while(p<exp) { res *= base; p++; }
    printf("3^4=%d\n", res);
    
    int number=4567, digits=0, temp=number;
    while(temp>0) { digits++; temp /= 10; }
    printf("%d has %d digits\n", number, digits);
    
    return 0;
}