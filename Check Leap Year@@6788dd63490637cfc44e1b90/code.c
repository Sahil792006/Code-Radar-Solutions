#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    if(a%100 && a%400){
        printf("Leap year");
    }
    else{
        printf("Not a leap year");
    }
}