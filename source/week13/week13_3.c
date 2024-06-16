#include <stdio.h>

int main(){

    int a[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int *pi;
    pi = a; // 배열이기에 a 자체가 배열의 시작주소를 가리키므로
    // & 사용하면 안 됨.
    printf("pi의 주소 = %d\n", pi);
    printf("*pi++ = %d\n", *pi++); // 10을 출력하고 a[1]의 주소 가짐
    printf("*pi++ after p의 데이터값 = %d\n", *pi); // 20
    printf("*pi++ after p의 주소 = %d\n\n", pi); // 처음 값에서 +4(int)만큼 증가한 값

    printf("(*pi)++ = %d\n", (*pi)++); // 20출력하고 a[1]값을 21로
    printf("*pi = %d\n", *pi); // 21

    printf("*++pi = %d\n", *++pi); // ++이 연산자우선순위가 높기에 a[2]로 이동
    printf("++*pi = %d\n", ++*pi); // a[2] += 2하고 값 출력

    return 0;
}