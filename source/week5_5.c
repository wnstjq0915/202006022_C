#include <stdio.h>
int main(){
    // 조건문 if
    int num1, num2, max, min;

    printf("정수 2개를 차례로 입력\n");

    printf("첫 번째 정수: ");
    scanf("%d", &num1);

    printf("두 번째 정수: ");
    scanf("%d", &num2);

    // 같은 경우 생각하지 않고
    if(num1 > num2){
        max = num1;
        min = num2;
    } else {
        max = num2;
        min = num1;
    }

    // 짝수 판별 조건문
    // if(num1 % 2 == 0){
    //     printf("%d는 짝수입니다.", num1);
    // } else if (num1 % 3 == 0){
    //     printf("%d는 3의 배수입니다.", num1);
    // } else {
    //     printf("%d는 3의 배수가 아닌 홀수입니다.", num1);
    // }

    // 최적화를 위해선 최상위조건에 가장 확률이 높은 것을 넣는다.

    printf("둘 중 큰 수: %d\n", max);
    printf("둘 중 작은 수: %d\n", min);

    return 0;
}