#include <stdio.h>

int main(){

    char str[20];
    int cnt, length = 0;
    // 반복문에서 사용할 배열 첨자 변수 cnt
    // 문자열 길이 저장 변수 length

    printf("문> 문자열을 20바이트 이내로 입력하시오 : ");
    scanf("%s", str, sizeof(str));
    
    for(cnt = 0; str[cnt] != '\0'; cnt++){
        length++;
    }

    printf("\n");
    printf("답> 입력한 문자열의 길이 : %d바이트\n", length);

    return 0;
}