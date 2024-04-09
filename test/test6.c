#include <stdio.h>
#include <math.h>

void main(){

    // 1009
    // 배열 배우고 다시 해보기
    
    /*
    예상풀이
    3의 제곱값들의 1의자리수를 배열에 저장.
    [3, ]

    */

    int try_num;
    scanf("%d", &try_num);

    int a, b;
    int data_num;

    for(int i=1; i<=try_num; i++){
        scanf("%d %d", &a, &b);
        data_num = ((int)pow(a, b))%10;
        if(data_num == 0){
            data_num = 10;
        }
        printf("%d\n", data_num);
        // pow는 제곱, sqrt는 제곱근

    }
}