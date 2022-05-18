/*
    This program calculates the roots of a quadratic equation:

    ax**2 + bx + c = 0 where a != 0

    To find the roots we use the Equation of Sri Dhor.
    x = {-b (+/-) sqrt(b**2 - 4ac)} / 2a


    Then there will be two values for x,

         -b + sqrt(b**2 - 4ac)
     x = --------------------
                 2a

         -b - sqrt(b**2 - 4ac)
     x = --------------------
                 2a


    The term (b**2 - 4ac) is known as the "discriminant" of a quadratic equation. It tells the nature of the roots.

    So The Algorithm is:

        1. Start
        2. Read a, b, c values
        3. Compute, discriminant = b**2 - 4ac
        4.if a == 0 then
            root1 = root2 = - c / b;

        5. else if discriminant > 0 then
            the roots are unequal and real.
            root1 = b+ sqrt (discriminant)/(2*a)
            root2 = b sqrt(discriminant)/(2*a)
            print r1,r2 values

        6. Otherwise if discriminant = 0 then
            the roots are equal and real.
            compute root1 = -b/2a, root2=-b/2a
            print r1,r2 values

        7. Otherwise if discriminant < 0 then print roots are imaginary
        8. Stop

*/

#include <math.h>
#include <stdio.h>

int main() {
    double a, b, c, discriminant, root1, root2;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = (b * b) - (4 * a * c);

    //
    if (a == 0){
        root1 = root2 = - c / b;
        printf("There is only one root.\n");
        printf("root1 = root2 = %.2lf;", root1);
    }

    // condition for real and different roots
    else if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The roots are real and different.\n");
        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
    }

    // condition for real and equal roots
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal.\n");
        printf("root1 = root2 = %.2lf;", root1);
    }

    // if roots are not real
    else {
        printf("Roots are imaginary.\n");

    }

    return 0;
}
