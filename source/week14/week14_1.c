#include <stdio.h>

int main(){

    char sa[] = "Spacezone";
    char *ps = "Spacezone";

    printf("배열 선언 char sa[] = \"Spacezone\"\n");
    printf("포인터 선언 char *ps = \"Spacezone\"\n");

    printf("\n배열 주소값 : %d\n", sa);
    printf("포인터 주소값 : %d\n", ps);

    printf("\n[배열 사용] \t [포인터 사용] \n");

    for(int cnt = 0; cnt < 9; cnt++){
        printf("sa[%d] : %c\t\t", cnt, sa[cnt]);

        // 대괄호 안 쓸 때의 배열값 접근과 똑같이 하면 됨.
        // printf("sa[%d] : %c\t\t", cnt, *(sa+cnt));
        printf("*(ps + %d) : %c\n", cnt, *(ps+cnt));
    }

    return 0;
}