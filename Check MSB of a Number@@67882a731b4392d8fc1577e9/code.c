#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    int mask = 1 << 31;
    if(a & mask){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
}