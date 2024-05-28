#include <stdio.h>

int main(){

    int a[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int *pi;
    pi = a; // 배열이기에 a 자체가 배열의 시작주소를 가리키므로
    // & 사용하면 안 됨.
    printf("pi의 주소 = %d\n", pi);
    printf("*pi++ = %d\n", *pi++);
    printf("*pi++ after p의 데이터값 = %d\n", *pi);
    printf("*pi++ after p의 주소 = %d\n\n", pi);

    printf("(*pi)++ = %d\n", (*pi)++);
    printf("*pi = %d\n", *pi);

    printf("*++pi = %d\n", *++pi);
    printf("++*pi = %d\n", ++*pi);

    return 0;
}