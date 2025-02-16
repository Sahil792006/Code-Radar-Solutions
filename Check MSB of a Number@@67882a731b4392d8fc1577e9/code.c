#include <stdio.h>
int main(){
    long long unsigned a;
    scanf("%llu", &a);
    if(a | 1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
}