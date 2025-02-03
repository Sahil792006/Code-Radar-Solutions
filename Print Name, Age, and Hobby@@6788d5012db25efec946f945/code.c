#include <stdio.h>

int main(){
    char name[50];
    char hobby[50];
    int age;
    printf("");
    scanf("%s", &name);
    printf("");
    scanf("%d", &age);
    printf("");
    scanf("%s", &hobby);
    printf("Name: %s\nAge: %d\nHobby: %s", name, age, hobby);
    return 0;
}