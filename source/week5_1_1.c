#include <stdio.h>

void num_gugudan(int num);

int main(){
    int num;
    printf("단을 입력하세요: ");
    scanf("%d", &num);
    num_gugudan(num);

    return 0;
}

void gugudan(int num){
    for(int i=1; i < 10; i++){
        printf("%d * %d = %d\n", num, i, num*i);
    }
}

void num_gugudan(int num){
    // num까지의 구구단을 출력하는 함수
    if(num < 1){
        // num은 1이상만 받음
        return;
    }

    for(int i=num; i>=1; i--){
        printf("----------\n");
        gugudan(i);
    }
}