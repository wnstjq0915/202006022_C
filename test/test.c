#include <stdio.h>

int main(){

    printf("한 변의 길이가 x인 마름모를 출력하려 합니다.\n");
    printf("x값을 입력해주세요.\n");
    printf("x: ");

    int num;
    scanf("%d", &num);

    int blank;

    for(int i=1; i<num*2; i++){

        blank = num-i;
        if(blank < 0){
            blank *= -1;
        }

        for(int j=0; j<blank; j++){
            printf(" ");
        }

        for(int k=0; k<(2*num-1)-blank*2; k++){
            printf("*");
        }

        printf("\n");
    }
    return 0;
}