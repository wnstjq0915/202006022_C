#include <stdio.h>

// 백준 10871

int main(){

    int re, max_num, num;
    scanf("%d %d", &re, &max_num);
    
    for(int i=0; i<re; i++){
        scanf("%d", &num);

        if(num<max_num){
            printf("%d ", num);
        }
    }

    return 0;
}