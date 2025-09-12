#include <stdio.h>
int main () {
int grade;
printf("Enter grade: ");
scanf("%d", &grade);

if (grade == 0) {
    printf("Invalid Grade\n");
}
else if (grade >= 75) {
    printf("Passed\n");
}
else {
    printf("Not Passed");
}
return 0;
}