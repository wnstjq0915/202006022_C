#include <stdio.h>

void print(int num){
    for(int i=1; i<=num; i++){
        printf("==============================\n");
    }
}

int main(){

    int num;
    scanf("%d", &num);
    
    print(num);

    return 1;
}