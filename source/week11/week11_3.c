#include <stdio.h>

float print(int num){
    return num*num*3.14;
}

int main(){

    int r;
    float result;
    scanf("%d", &r);
    
    result = print(r);
    printf("%.2f", result);

    return 1;
}