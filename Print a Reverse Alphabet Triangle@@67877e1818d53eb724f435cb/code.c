#include <stdio.h>
int main(){
    int n;
    char a = 'A';
    scanf("%d", &n);
    for(int i=n;i>0;i--){
        
        for(int j=1; j<=i; j++){
            printf("%c ", a);
            a++;
        }
        printf("\n");
    }
}