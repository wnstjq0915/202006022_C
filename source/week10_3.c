#include <stdio.h>

void start(){               // 사용자 정의 함수 정의
    static int s_cnt = 0;   // 정적 변수 선언과 초기화
    int a_cnt = 0;          // 동적 변수 선언과 초기화

    printf("정적변수 = %d\t 동적변수 = %d\n", s_cnt, a_cnt);
    s_cnt++;
    a_cnt++;
}

int main(void){
    printf("Start( ) 함수 3회 호출 결과\n");

    for(int i=1; i<=3; i++){
        start();
    }

    return 0;
}