#include <stdio.h>
int main() {
   int num;
   printf("🌟 Enter a number to reveal its cosmic table: ");
   scanf("%d", &num);
   printf("\n🌀 Multiplication Matrix of %d:\n", num);
   for (int i = 1; i <= 10; i++) {
       printf("✨ %d × %d = %d", num, i, num * i);
       for (int j = 0; j < i; j++) {
           printf("⭐");
       }
       printf("\n");
   }
   printf("\n🌠 Cosmic Calculation Complete! 🌠\n");
   return 0;
}
