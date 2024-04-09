#include <stdio.h>

void main(){
    // 정삼각형
    
    int a, b, c;
    int num1;
    printf("자연수 num1 값을 입력하세요: ");
    scanf("%d", &num1);

    for(int a=0; a<num1; a++){
        for(int b = num1 - 1; b > a; b--){
            printf(" ");
        }
        for(int c = 0; c < 2 * a + 1; c++){
            printf("*");
        }
        printf("\n");
    }
}