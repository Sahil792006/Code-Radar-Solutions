#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    if(a%100 && a%400){
        printf("Not a leap year");
    }
    else{
        printf("Leap year");
    }
}