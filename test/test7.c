#include <stdio.h>
#include <stdbool.h>
void main(){
    int a = 10;
    int i = 5;
    if(a==11 && a == ++i){
        // 실행 안 됨.
    }
    printf("%d", i);
    // ++i가 연산자우선순위가 높더라도 && 전에 false가 있으므로 실행X
}