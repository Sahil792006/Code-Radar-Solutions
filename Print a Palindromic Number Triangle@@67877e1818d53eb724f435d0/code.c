#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    for(int i=1; i<=a; i++){
        int c = 1;
        for(int j=1; j<=a-i; j++){
            printf(" ");
        }
        for(int k=1; k<=(2*i-1); k++){
            printf("%d" , c);
            c = 1 - c;
        }
        printf("\n");
    }
}