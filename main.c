#include <stdio.h>

int main() {
double a, b;
char op;

printf("Enter expression: ");
scanf("%lf %c %lf", &a, &op, &b);

if (op == '+') printf("= %.2lf\n", a + b);
else if (op == '-') printf("= %.2lf\n", a - b);
else if (op == '*') printf("= %.2lf\n", a * b);
else if (op == '/') {
if (b != 0) printf("= %.2lf\n", a / b);
else printf("Error: divide by zero!\n");
}
else printf("Invalid operator.\n");

return 0;
}