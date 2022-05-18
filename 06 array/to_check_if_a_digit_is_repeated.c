#include<stdio.h>

int main(){

    int numbers[10] = {0};

    int digit, i, last_digit;

    printf("Enter the digit: ");
    scanf("%d", &digit);

    while(digit>0){
            last_digit = digit%10;
            if(numbers[last_digit] == 1){
                printf("This digit have same number more than once");
                break;
            }
            numbers[last_digit] = 1;
            digit = digit / 10;
            }
    return 0;
}


