#include<stdio.h>

int main(){
    int x = 24, y = 39, z = 45;

    z = x + y;
    y = z - y;
    x = z - y;

    printf("%d%d%d", x, y, z);

    return 0;

}
