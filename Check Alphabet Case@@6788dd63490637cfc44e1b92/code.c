#include <stdio.h>
int main(){
    char s;
    scanf("%c", &s);
    if(s >='A' && s<='Z'){
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }
}