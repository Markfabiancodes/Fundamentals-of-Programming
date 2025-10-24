#include <stdio.h>
int main() {
   printf("✨ Even Number Symphony ✨\n");
    for (int i = 0; i <= 10; i++) {
       int even = i << 1;
       printf("🎭 %d", even);
       for (int j = 0; j <= even; j += 2) {
           printf("♡");
       }
       printf("\n");
   }
   printf("\n🌈 Even Magic Complete! 🌈\n");
   return 0;
}

