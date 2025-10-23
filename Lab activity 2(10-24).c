#include <stdio.h>
int main() {
   printf("Even numbers from 0 to 10:\n");
   for (int x = 0; x <= 10; x++) {
       if (x % 2 == 0)
           printf("%d ", x);
   }
   return 0;
}
