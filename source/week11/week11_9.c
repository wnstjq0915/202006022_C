#include <stdio.h>

#define MAX_NUMBERS 100
#define RANGE 10
#define N 10
/*
C99버전부터는 배열 크기를 변수로 지정 가능하나,
여기에서는 에러가 나기에 임시로 상수N으로 대체
(다른 컴파일러에서는 에러 없이 가능)
*/

// 어떤 숫자를 몇 개 입력한지 확인하는 코드

void readNumbers(int numbers[], int n);
void calculateFrequency(int numbers[], int n, int frequency[]);
void printFrequency(int frequency[], int range);

int main(){
    // int N;
    printf("Enter the number of elements (up to %d): ", MAX_NUMBERS);
    // scanf("%d", &N);

    if(N<1 || N>MAX_NUMBERS){
        printf("valid number of elements between 1 and %d.\n", MAX_NUMBERS);
        return 1;
    }

    int numbers[N];
    readNumbers(numbers, N);

    int frequency[RANGE] = {0};
    calculateFrequency(numbers, N, frequency);

    printFrequency(frequency, RANGE);
    
    return 0;
}

void readNumbers(int numbers[], int n){
    printf("Enter %d numbers (0-9): ", n);
    for (int i=0; i<n; i++){
        // 숫자 N번 입력하기
        scanf("%d", &numbers[i]);
        if (numbers[i] < 0 || numbers[i] > 9){
            printf("Invalid number: %d. Please enter 0 and 9.\n", numbers[i]);
            i--; // Adjust the index to re-enter the correct cumber
        }
    }
}

void calculateFrequency(int numbers[], int n, int frequency[]){
    for (int i=0; i<n; i++){
        frequency[numbers[i]]++;
    }
}

void printFrequency(int frequency[], int range){
    for (int i=0; i<range; i++){
        printf("Number %d: %d times\n", i, frequency[i]);
    }
}