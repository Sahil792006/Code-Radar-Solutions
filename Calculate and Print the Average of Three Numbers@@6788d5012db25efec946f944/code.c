#include <stdio.h>
int main(){
    int a, b, c;
    float d;
    printf("");
    scanf("%d", &a);
    printf("");
    scanf("%d", &b);
    printf("");
    scanf("%d", &c);
    d = (a + b + c)/3.0;
    printf("Average: %.2f", d);
    return 0;
}