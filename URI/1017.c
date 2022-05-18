#include <stdio.h>

int main() {
    double hours, km, total;
    double ltr;

    scanf("%lf", &hours);
    scanf("%lf", &km);

    total = hours * km;

    ltr = total / 12;

    printf("%.3lf\n", ltr);


    return 0;
}
