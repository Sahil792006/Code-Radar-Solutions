#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    for(int i=1; i<=a; i++){
        
        for(int j=1; j<=a-i; j++){
            printf(" ");
        }

        for(int j=1; j<=i; j++){
            printf("%d", j);
        }

        for(int k=i-1; k>1; k--){
            printf("%d" , k);
        }
        printf("\n");
    }
}