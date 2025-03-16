#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    char a;
    a = 'A';
    for(int i=1; i<=n; i++){
        for(int j=a; j<=i;j++ ){
            printf("%c", &j);
        }
        printf("\n");
    }
}