#include<stdio.h>

int main()
{
    double cel, far;

    printf("Enter celcius: ");
    scanf("%lf", &cel);

    far = (cel * 1.8) + 32;

    printf("Farenheit Value: %lf", far);

    return 0;


}

