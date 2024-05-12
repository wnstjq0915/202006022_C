#include <stdio.h>

int print_num(int num);

int main(void){

    int num;
    printf("1 이상의 값 입력: ");
    scanf("%d", &num);
    printf("값 출력: \n");
    print_num(num);

    return 1;
}

int print_num(int num){
    if(num < 1){
        printf("잘못된 값이 입력되었습니다.");
        return 0;
    }
    printf("%d\n", num);

    if(num == 1){
        return 1;
    }

    return print_num(num-1);
}