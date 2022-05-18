#include<stdio.h>

int main(){

    int i, is_identical = 1, array_1[5], array_2[5];
    for(i = 0; i < 5; i++){
        printf("Enter value of array_1[%d] and array_2[%d]: ", i, i);
        scanf("%d %d", &array_1[i], &array_2[i]);
    }

    for(i = 0; i < 5; i++){
        if(array_1[i] == array_2[i]){
            continue;
        }
        else{
            is_identical = 0;
            break;
        }
    }

    if(is_identical == 1){
        printf("Arrays Are Identical");
    }else printf("Arrays Are Not Identical");

    return 0;
}
