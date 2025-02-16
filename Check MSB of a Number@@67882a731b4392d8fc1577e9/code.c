#include <stdio.h>
int main(){
    long unsigned a;
    scanf("%lu", &a);
    if(a | 1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
}