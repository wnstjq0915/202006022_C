#include <stdio.h>

int main(){

    int num;
    int odd = 0;
    int even = 0;

    while(1){
        scanf("%d", &num);
        if(num == 0){
            break;
        }
        if(num % 2 == 1){
            odd += 1;
        } else{
            even += 1;
        }
    }
    printf("odd : %d\n", odd);
    printf("even : %d\n", even);

    return 0;
}