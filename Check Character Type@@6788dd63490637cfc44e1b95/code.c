#include <stdio.h>
int main(){
    char a;
    scanf("%c", &a);
    if(a == "aeiou AEIOU"){
        printf("Vowel");
    }
    else if(a = 1,2,3,4,5,6,7,8,9,0){
        printf("Digit");
    }
    else if(a = '!', '@', "#", '$', "&"){
        printf("Special Character");
    }
    else{
        printf("Consonant");
    }
}