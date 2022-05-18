/* this program prints:

input: 5678

output:
5678
678
78
8

*/


#include<stdio.h>

int main(){

    int n, i, j,length_of_digit = 0, arr[30];

    printf("Enter a number: ");
    scanf("%d", &n);

    // input the values in the array. and count how many value are we entering.
    // if n = 5678 then, the digits will be entered in array in reverse order like: 8 7 6 5
    while(n != 0){
        arr[i++] = n % 10;
        n = n / 10;
        length_of_digit += 1;

    }


    for(i = 0; i < length_of_digit; i++){
        // j = 4 - 0 - 1
        for(j = length_of_digit - i - 1; j >= 0; j--){
            printf("%d ", arr[j]);
        }
        printf("\n");
    }

    return 0;

}
