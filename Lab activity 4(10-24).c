#include <stdio.h>
#include <math.h>
int main() {
   printf("Exponential Symphony: 2^n Series\n");
   printf("══════════════════════════════════\n\n");
   printf("┌───────┬───────┬───────────────┐\n");
   printf("│ Power │ Value │   Equation    │\n");
   printf("├───────┼───────┼───────────────┤\n");
   for (int n = 0; n <= 9; n++) {
       int result = (int)pow(2, n);
       printf("│ 2^%-3d │ %-5d │ ", n, result);
       // Visual representation
       for (int i = 0; i < n; i++) {
           printf("2");
           if (i < n - 1) printf("×");
       }
       if (n == 0) printf("1");
       printf("%*s│\n", 13 - (n * 2), "");
   }
   printf("└───────┴───────┴───────────────┘\n");
   return 0;
}
