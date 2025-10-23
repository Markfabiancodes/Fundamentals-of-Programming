#include <stdio.h>
int main() {
   int power = 1;
   printf("Powers of 2 up to 512:\n");
   for (int i = 0; power <= 512; i++) {
       printf("2^%d = %d\n", i, power);
       power *= 2;
   }
   return 0;
}