#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
float div(int a, int b);

void main(){
    int a = 10;
    int b = 20;
    int result = 0;
    result = add(a, b);
    printf("%d + %d = %d\n", a, b, result);

    result = sub(a, b);
    printf("%d - %d = %d\n", a, b, result);

    result = mul(a, b);
    printf("%d * %d = %d\n", a, b, result);

    float div_result = div(a, b);
    printf("%d / %d = %.2f\n", a, b, div_result);
    // %.2f하여 소수점 두자리까지 포맷팅
}

int add(int a, int b){
    return a+b;
}
int sub(int a, int b){
    return a-b;
}
int mul(int a, int b){
    return a*b;
}
float div(int a, int b){
    return a/(float)b;
}
