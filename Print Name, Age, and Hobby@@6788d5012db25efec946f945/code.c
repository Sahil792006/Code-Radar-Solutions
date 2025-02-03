#include <stdio.h>

int main(){
    char name;
    char hobby;
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