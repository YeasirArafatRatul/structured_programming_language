#include<stdio.h>

int getNum(){

    int number;
    scanf("%d", &number);

    return number;

}




int main(){

    int a;
    a = getNum();

    printf("%d", a);

    return 0;


}
