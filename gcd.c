#include<stdio.h>


int main(){

    int n1, n2, i, minimum, gcd;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

 	minimum = n1 < n2? n1 : n2;
    for (i = 1; i <= minimum; ++i) {

        // check if i is a factor of both integers
        if (n1 % i == 0 && n2 % i == 0)
            gcd = i;

    }
	printf("%d\n", gcd);

return 0;
}

