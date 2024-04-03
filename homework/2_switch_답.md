# 답
## 요구능력
- int 자료형의 이해
- switch문의 조건에 대한 이해
- switch문의 break에 대한 이해

## 코드
```c
#include <stdio.h>

int main(){

    int num;
    char grade;

    printf("점수를 입력하세요: ");
    scanf("%d", &num);

    switch(num / 10){
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
    printf("당신의 등급은 %c 입니다.", grade);

    return 0;
}
```