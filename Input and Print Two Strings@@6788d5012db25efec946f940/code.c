#include <stdio.h>
int main(){
    char str1[100];
    char str2[100];
    printf("");
    scanf("%c", &str1);
    printf("");
    scanf("%c", &str2);
    printf("You entered: %c and ", str1);
    printf("%c", str2);
    return 0;
}