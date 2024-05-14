#include <stdio.h>

#define CNT 9

void array_1(int a[]){ // 매개변수는 배열의 크기를 쓰지 않음.
    for(int i=0; i<CNT; i++){
        a[i]++;
        // 실제 주소값을 이용해서 값을 주기에
        // 반환값이 없어도 적용됨
    }
}

int main(){

    int a[CNT] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    printf("before\n");
    for(int i=0; i<CNT; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    array_1(a);

    printf("after\n");
    for(int i=0; i<CNT; i++){
        printf("%d ", a[i]);
    }

    return 1;
}