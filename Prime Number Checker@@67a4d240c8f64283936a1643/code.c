#include <stdio.h>
int main(){
    int t; 
    scanf("%d", &t);
    while(t--){
        int num;
        scanf("%d", &num);
        printf("%d\n", isPrime(num));
    }
}

int isPrime(int num){
    if (num == 0|| num == 1)
        flag = 1;
    for(i=2; i<=num; i++){
        if(num % i == 0){
            flag = 1;
            break;
        }
    }
}