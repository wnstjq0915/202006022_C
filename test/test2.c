#include <stdio.h>
void main(){

    int num;
    scanf("%d", &num);
    int star;
    int width = num * 2 - 1;

    for(int i=0; i<width; i++){

        star = 1 + 2 * i;
        if(i>=num){
            star -= 4*(i-num+1);
        }
        for(int j=1; j<=(width - star)/2; j++){
            printf(" ");
        }
        for(int k=1; k<=star; k++){
            printf("*");
        }
        printf("\n");
    }

}