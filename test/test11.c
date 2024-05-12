#include <stdio.h>

int main(){

    int num;
    int odd = 0;
    int sum = 0;

    while(1){
        scanf("%d", &num);
        if(num == 0){
            break;
        }
        if(num % 2 == 1){
            odd += 1;
            sum += num;
        }
    }
    printf("홀수의 합 : %d\n", sum);
    printf("홀수의 평균 : %d\n", sum / odd);

    return 0;
}