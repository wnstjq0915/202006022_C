#include <stdio.h>
#include <stdbool.h> // 없으면 while true 에러

void main(){
    /*
    입력한 두 수 중 작은 수의 제곱이 짝수이거나 3의 배수이면 성공
    아니면 실패를 출력하는 코드
    성공시 다시 실행, 실패시 종료.
    */
    int a;
    int b;

    int min;

    while (true)
    {
        scanf("%d %d", &a, &b);

        // if(a>b){
        //     min = b;
        // } else {
        //     min = a;
        // }
        min = (a>b)? b:a;

        if(min*min % 2 != 0 && min*min % 3 != 0){
            printf("탈출");
            break;
        }
        printf("루프\n");
    }
}