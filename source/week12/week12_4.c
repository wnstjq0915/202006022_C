#include <stdio.h>

// 백준 10871

int main(){

    int re;
    int max_num;
    scanf("%d %d", &re, &max_num);
    int num_li[10]; // 임시로 10으로 했지만 c99환경에서는 10을 re로 바꾸기.

    for(int i=0; i<re; i++){
        scanf("%d", &num_li[i]);
    }

    for(int i=0; i<re; i++){
        if(num_li[i]<max_num){
            printf("%d ", num_li[i]);
        }
    }

    return 0;
}