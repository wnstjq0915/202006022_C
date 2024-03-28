#include <stdio.h>

int add(int a);
int sub(int a);
int mul(int a);
int div(int a);
int remain(int a);

void main(){

    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    
    // int result;

    // result = add(a);
    // printf("%d ", result);

    // result = sub(a);
    // printf("%d ", result);

    // result = mul(a);
    // printf("%d ", result);

    // result = div(a);
    // printf("%d ", result);

    // result = remain(a);
    // printf("%d ", result);

    // 복사용: 1 2 3 6 10
    printf("%d %d %d %d %d", a+3, b-3, c*3, d/3, e%3);
}

int add(int a){
    return a+3;
}
int sub(int a){
    return a-3;
}
int mul(int a){
    return a*3;
}
int div(int a){
    return a/3;
}
int remain(int a){
    return a%3;
}