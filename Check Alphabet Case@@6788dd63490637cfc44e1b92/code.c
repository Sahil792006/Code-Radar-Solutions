#include <stdio.h>
int main(){
    char s;
    scanf("%c", &s);
    if(s >='A' && s<='Z'){
        printf("Uppercase");
    }
    else if(s >= 'a' && s<= 'z'){
        printf("Lowercase");
    }
    else {
        printf("Not an alphabet")
    }
}