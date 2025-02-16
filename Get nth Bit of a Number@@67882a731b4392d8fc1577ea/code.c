#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d", &a,&b);
    
    int j = (a >> b ) & 1;
    printf("%d", j);
}