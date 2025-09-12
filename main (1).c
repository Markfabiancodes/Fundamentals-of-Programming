#include <stdio.h>
int main() {
    char name[50], course[50], favoritefood[50], hobby[50];
    int age;
    
    printf("enter your name: ");
    scanf("%[^\n]", name);
    printf("enter your age: ");
    scanf("%d", &age);
    getchar();
    printf("enter your course: ");
    scanf("%[^\n]", course);
    getchar();
    printf("enter your favoritefood: ");
    scanf("%[^\n]", favoritefood);
    getchar();
    printf("enter your hobby: ");
    scanf("%[^\n]", hobby);

    
    printf("\n======== USER INFO ========\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Favorite Food: %s\n", favoritefood);
    printf("Hobby: %s\n", hobby);
    return 0;

}