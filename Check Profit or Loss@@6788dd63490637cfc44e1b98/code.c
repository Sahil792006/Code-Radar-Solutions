#include <stdio.h>
int main(){
    float a,b;
    scanf("%f %f", &a, &b);
    if(a<b){
        printf("Profit");
    }
    else if(a==b){
        printf("No Profit No Loss");
    }
    else{
        printf("Loss");
    }
}