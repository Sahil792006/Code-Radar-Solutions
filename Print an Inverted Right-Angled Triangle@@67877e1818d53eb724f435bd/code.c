#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    for(int i=1; i<=a; i*i){
        printf("*\n");
    }
}