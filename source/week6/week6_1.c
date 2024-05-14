#include <stdio.h>
int main(){
    // 조건문 if2

    int jumsu;
    char grade;

    printf("점수 입력: ");
    scanf("%d", &jumsu);

    switch(jumsu / 10){
        case 10:
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        default:
            grade = 'F';
    }

    printf("점수 등급: %c학점\n", grade); // %d로 할 경우 grade에 할당된 문자에 해당하는 코드 출력.
    // 아스키코드?: 대문자 + 32 -> 소문자

    // int num = 120;
    // printf(120 % num); // 왼쪽은 무조건 변수가 나와야 하므로 에러.

    // if(10<=a<=15) // 조건 에러. && 연산자가 있어야 함.

    return 0;
}