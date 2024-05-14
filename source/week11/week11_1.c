#include <stdio.h>

void print(){
    printf("==============================\n");
}

int main(){
    
    print();
    printf("line 함수를 호출하였습니다.\n");
    printf("line 함수를 다시 호출합니다.\n");
    print();

    return 1;
}