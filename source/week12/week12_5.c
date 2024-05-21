#include <stdio.h>

#define suNo 5

int main(){

    // int suNo;
    // scanf("%d", &suNo);

    int A[suNo];
    for(int i=0; i<suNo; i++){
        scanf("%d", &A[i]);
    }

    int S[suNo];
    S[0] = A[0];
    for(int i=1; i<suNo; i++){
        S[i] = S[i-1] + A[i];
    }

    for(int i=0; i<suNo; i++){
        printf("%d ", S[i]);
    }

    return 0;
}