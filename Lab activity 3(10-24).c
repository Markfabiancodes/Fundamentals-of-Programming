#include <stdio.h>
int main() {
   printf("Odd numbers between 1 and 20:\n");
   for (int n = 1; n <= 20; n += 2) {
       printf("%d ", n);
   }
   return 0;
}