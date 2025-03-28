#include <stdio.h>

void trackPlayerRanks(int ranked[], int n, int player[], int m, int result[]){
    // Remove duplicates from ranked array
    int uniqueranked[200000], uniqueSize = 0;
    
    if (n > 0) { // Ensure n is greater than 0 before accessing elements
        uniqueranked[0] = ranked[0];
        uniqueSize = 1;
    }

    for(int i = 1; i < n; i++){
        if(ranked[i] != ranked[i - 1]){
            uniqueranked[uniqueSize++] = ranked[i];
        }
    }

    // Initialize rank and index
    int rank = uniqueSize + 1;
    int index = uniqueSize - 1;

    for(int i = 0; i < m; i++){
        while (index >= 0 && player[i] >= uniqueranked[index]){
            index--;
            rank--;
        }
        result[i] = rank;
    }
}

int main(){
    int n, m;
    scanf("%d", &n);
    int ranked[200000];

    for(int i = 0; i < n; i++){
        scanf("%d", &ranked[i]);
    }

    scanf("%d", &m);
    int player[200000];

    for(int i = 0; i < m; i++){
        scanf("%d", &player[i]);
    }

    int result[200000];
    trackPlayerRanks(ranked, n, player, m, result);

    for(int i = 0; i < m; i++){
        printf("%d\n", result[i]);
    }

    return 0;
}
