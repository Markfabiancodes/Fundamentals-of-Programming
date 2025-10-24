#include <stdio.h>
int main() {
  printf("✨ Odd Number Symphony ✨\n");
  for (int i = 0; i <= 4; i++) {
      int odd = (i << 1) + 1;
      printf("🎭 %d", odd);
      for (int j = 0; j <= odd; j += 2) {
          printf("♡");
      }
      printf("\n");
  }
  printf("\n🌈 Odd Magic Complete! 🌈\n");
  return 0;
}
