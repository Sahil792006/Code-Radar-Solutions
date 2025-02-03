#include <stdio.h>
int main(){
    char str1[100];
    char str2[100];
    printf("");
    scanf("%s", &str1);
    printf("");
    scanf("%s", &str2);
    printf("You entered: %s and ", str1);
    printf("%s", str2);
    return 0;
}