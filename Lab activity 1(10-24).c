#include <stdio.h>
int main() {
   printf("Counting by tens:\n");
   for (int step = 10; step <= 100; step += 10) {
       printf("%d ", step);
   }
   return 0;
}