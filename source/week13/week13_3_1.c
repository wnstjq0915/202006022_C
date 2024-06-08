#include <stdio.h>

int main(){

    int a = 50;
    int *pi;
    pi = &a; // 배열이기에 a 자체가 배열의 시작주소를 가리키므로
    // & 사용하면 안 됨.
    printf("pi의 주소 = %d\n", pi);
    printf("*pi++ = %d\n", ++pi);
    // 배열이 아니더라도 주소값이 int의 크기인 4만큼 증가.

    return 0;
}