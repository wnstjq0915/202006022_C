#include <stdio.h>

int fact(int num); // 팩토리얼 계산 함수
int sum_num(int num); // 누적 + 계산 함수

int main(void){

    int num;
    printf("1 이상의 값 입력: ");
    scanf("%d", &num);
    printf("팩토리얼: %d\n", fact(num));
    printf("누적 더한 수: %d\n", sum_num(num));

    return 1;
}

int fact(int num){
    if(num < 1){
        printf("잘못된 값이 입력되었습니다.");
        return 0;
    }

    if(num == 1){
        return 1;
    }

    return num * fact(num-1);
}

int sum_num(int num){
    if(num < 1){
        printf("잘못된 값이 입력되었습니다.");
        return 0;
    }

    if(num == 1){
        return 1;
    }

    return num + sum_num(num-1);
}