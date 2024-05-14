#include <stdio.h>

int mor_big(int x, int y){
    return (x>y)? x:y;
}

int main(){

    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d", mor_big(x, y));

    return 1;
}