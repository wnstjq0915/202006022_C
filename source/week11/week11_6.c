#include <stdio.h>

int main(){

    int score[5] = {1, 2, 3, 4, 5};
    int cnt;

    for(cnt=0; cnt<5; cnt++){
        printf("score[%d] = %d\n", cnt, score[cnt]);
    }
    return 1;
}