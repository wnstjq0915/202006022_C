#include <stdio.h>

void num_gugudan(int num);

int main(){

    // 위 함수에서 출력하는 gugudan() 함수는
    // 위 함수에서만 쓰이므로 위에서 정의X

    int num;
    printf("단을 입력하세요: ");
    scanf("%d", &num);

    // for문
    // for(int i=1; i < 10; i++){
    //     printf("%d * %d = %d\n", num, i, num*i);
    // }


    // while문
    // int i = 1;
    // while(i < 10){
    //     printf("%d * %d = %d\n", num, i, num*i);
    //     i++;
    // }


    // num까지의 구구단을 출력하는 함수
    num_gugudan(num);


    return 0;
}

void gugudan(int num){
    for(int i=1; i < 10; i++){
        printf("%d * %d = %d\n", num, i, num*i);
    }
}

void num_gugudan(int num){
    // num까지의 구구단을 출력하는 함수
    if(num < 1){
        // num은 1이상만 받음
        return;
    }

    for(int i=1; i<=num; i++){
        printf("----------");
        gugudan(i);
    }
}