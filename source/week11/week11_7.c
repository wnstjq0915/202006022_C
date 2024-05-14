#include <stdio.h>

#define DT 3

int main(){

    int score[3];
    int cnt, sum = 0;
    float avg;

    for(cnt=0; cnt<DT; cnt++){
        printf("과목%d 점수: ___\b\b\b, cnt+1");
        scanf("%d", &score[cnt]);
    }
    return 1;
}