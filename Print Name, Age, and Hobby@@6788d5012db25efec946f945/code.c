#include <stdio.h>

int main(){
    char name[50];
    char hobby[50];
    int age;
    printf("");
    scanf("%c", &name);
    printf("");
    scanf("%d", &age);
    printf("\n");
    scanf("%c", &hobby);
    printf("Name: %c\nAge: %d\nHobby: %c", name, age, hobby);
    return 0;
}