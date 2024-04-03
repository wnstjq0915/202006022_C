#include <stdio.h>
void main(){

    int input, year;

    printf("윤년이면 1, 평년이면 0 출력\n");

    printf("연도 입력: ");
    scanf("%d", &input);
    
    year = ((input % 4 == 0) && !(input % 100 == 0)) || (input % 400 == 0);
    // printf("입력한 %d년은 %d에 해당합니다.\n", input, year);


    // 조건 연산자(삼항 연산자)

    // 추후 문자열을 조건 연산자를 이용하여 할당해보기
    // char stringYear[] = (year == 1) ? "윤년" : "평년";
    // printf("입력한 %d년은 %s에 해당합니다.\n", input, stringYear);
}