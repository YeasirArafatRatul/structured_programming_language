/*

'A,B,C,D = character = char = %c
1, 2, 3,4,5 = integer = int = %d
1.0, 3.4 = float = float = %f
1.0000 = double = %lf

"hello" = string = %s

*/


#include<stdio.h>

int main(){


    char a = 'C';
    int b = 4;
    float c = 3.5555555555555;
    double d = 4.555555555555;
    char e[] = "Hello";



    printf("%c\n", a);
    printf("%d\n", b);
    printf("%f\n", c);
    printf("%lf\n", d);
    printf("%s\n", e);

    return 0;
}
