#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    if(a%a==1 && a%1==a){
        printf("Prime");
    }
    else{
        printf("Not prime");
    }
}