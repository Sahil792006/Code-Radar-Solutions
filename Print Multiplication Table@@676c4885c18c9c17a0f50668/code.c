#include <stdio.h>
int main(){
    int n,multi;
    scanf("%d", &n);

    for(int i=1; i<=10; i++){
        multi = n*i;
        printf("%d x %d = %d\n", n,i,multi);
    }
}