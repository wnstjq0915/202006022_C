#include <stdio.h>
int main(void){
    // 사전처리 반복문
    // for, while

    // 사후처리 반복문
    // do while 등

    /*
    for문 무한반복
    for ( ; ; ){

    }
    이거는 break로만 빠져나갈 수 있음.
    */

    // while(true){ // while의 무한반복
    // }

    // int i = 1;
    // while(i<=5){
    //     printf("*");
    //     i++;
    // }
    // ***** 출력

    int i = 0;
    int sum = 0;
    while (i++ < 10) { // 증감을 조건에 넣어도 됨.
        sum += i;
    }
    printf("1부터 10까지의 합 = %d\n", i);
    printf("while문이 끝난 후의 sum의 값 = %d\n", sum);

    // i++과 ++i 조심해서 사용하기.
    // i++은 해당 줄의 코드가 실행된 뒤에 증가.
    // ++i는 증가가 된 뒤에 해당 줄 코드 실행.


    /*
    교수님 코드
    int sum = 0;
    int i = 1;
    while (i =< 10) { // 증감을 조건에 넣어도 됨.
        sum += i;
        i++
    }
    printf("1부터 10까지의 합 = %d\n", i);
    printf("while문이 끝난 후의 sum의 값 = %d\n", num);
    */
    int p = 4;
    for(int i=1; i<=3; i++, p*=i){

    }
    printf("p = %d", p); // 96
    // i++ 뒤에 추가로 코드 삽입 가능.
    // i++이 적용된 뒤에 오른쪽 코드 실행.
    // 그러므로 2, 3, 4를 각각 p에 곱하여서 96


    // 함수 안에 들어가는 수를 매개변수 or 인수

    return 0;
}