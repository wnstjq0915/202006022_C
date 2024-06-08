// 백준 17608번

#include <stdio.h>
#define reNum 1

int main(){

    // int reNum;
    int maxNum;
    int result = 1;
    // scanf("%d", &reNum);
    int numLi[reNum]; // C99에서는 변수를 크기로 가능.
    for(int i=0; i<reNum; i++){
        scanf("%d", &maxNum);
        numLi[i] = maxNum;
    }

    for(int i=reNum-2; i>=0; i--){
        if(numLi[i] > maxNum){
            result++;
            maxNum = numLi[i];
        }
    }

    printf("%d", result);

    return 0;
}