/* bee crowd problem 1009 */

#include <stdio.h>


int main(){

    char name[256];
    double salary, sales, total;
    scanf("%s", &name);
    scanf("%lf", &salary);
    scanf("%lf", &sales);

    total = salary + ((sales/100)*15);

    printf("TOTAL = R$ %.2lf\n", total);


    return 0;



}
