#include <stdio.h>
#include <stdlib.h>
// <stdlib.h>는 c언어의 기본적인 라이브러리를 이용하고 싶을 때 사용
// malloc(), calloc(), realloc(), free() 등의 함수 사용가능

void main()
{
    system("title 정수형 데이터의 자릿수 지정 형식");
    // 바로 윗줄 코드로 인해 #include <stdlib.h> 이용
    // 넣지 않아도 작동은 함. 시험범위 X

    printf("|%d|", 358);
    printf(": 정수형 기본 자릿수\n");

    printf("|%5d|", 358);
    printf(": 전체 자릿수 5개\n");

    printf("|%05d|", 358);
    printf(": 전체 자릿수는 5개이고 빈칸은 0으로 채움\n");
}