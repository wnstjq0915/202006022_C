#include <stdio.h>
int main(){
    // switch문

    // 주의사항
    // 실수는 안되고 정수만 가능
    // 문자는 되고, 문자열은 안 됨
    // switch에 넣은 변수가 ?와 같은지만 확인가능

    printf("계산식 입력: ");

    int x, y;
    char op;

    scanf("%d %c %d", &x, &op, &y);
    // 입력예시: 2 + 3

    // if문으로 구현
    // if(op == '+'){
    //     printf("%d %c %d = %d\n", x, op, y, x+y);
    // } else if(op == '-'){
    //     printf("%d %c %d = %d\n", x, op, y, x-y);
    // } else if(op == '*'){
    //     printf("%d %c %d = %d\n", x, op, y, x*y);
    // } else if(op == '/'){
    //     printf("%d %c %d = %d\n", x, op, y, x/y);
    // } else {
    //     printf("잘못된 연산자를 입력했습니다.\n");
    // }


    // switch문으로 구현
    switch(op){
        case '+':
            printf("%d %c %d = %d\n", x, op, y, x+y);
            break;
        case '-':
            printf("%d %c %d = %d\n", x, op, y, x-y);
            break;
        case '*':
            printf("%d %c %d = %d\n", x, op, y, x*y);
            break;
        case '/':
            printf("%d %c %d = %d\n", x, op, y, x/y);
            break;
        default:
            printf("잘못된 연산자를 입력했습니다.\n");
    }

    return 0;
}