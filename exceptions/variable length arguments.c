/* Variable Length Argument */


/* You cannot access variable length arguments directly.
Header file stdarg.h provide macros that support access to var-args.
To implement var-args in our program we will use following macros definitions.

va_list - Data type to define a va_list type variable.
va_start - Used to initialize va_list type variable.
va_arg - Retrieves next value from the va_list type variable.
va_end - Release memory assigned to a va_list variable.

*/

#include <stdio.h>
#include <stdarg.h> // Used for var-args
// #include <limits.h> // Used for INT_MIN

/* Variable length arguments function declaration */
int maximum(int num, ...);

int main()
{
    /*
     * Test var-args with some sample values.
     */
    printf("Max(10,2) = %d\n", maximum(2, 10, 2));
    printf("Max(4,2,3,0) = %d\n", maximum(4, 4, 2, 3, 0));

    printf("Max(1,2,3,4,10,20,30) = %d\n", maximum(7, 1, 2, 3, 4, 10, 20, 30));
    printf("Max(100,10,0,1,2,3,4,10,20,12) = %d\n", maximum(10, 100, 10, 0, 1, 2, 3, 4, 10, 20, 12));
    return 0;
}


/**
 * Variable length arguments function definition.
 * num  Total number of arguments passed.
 * ...  Variable length arguments
 * Returns maximum value among n integer
 */
int maximum(int num, ...)
{
    int max = INT_MIN;
    int count; // Loop counter variable
    int value; // Store the value of current argument in var-args

    // Declare va_list type variable
    va_list list;

    // Initialize the list
    va_start(list, num);

    /*
     * Run loop from 1 to number of arguments passed
     */
    for(count=1; count<=num; count++)
    {
        // Get next argument in list
        value = va_arg(list, int);

        /*
         * If current argument is greater than max
         * then store it in max.
         */
        if(value > max)
            max = value;
    }

    // Clean the list
    va_end(list);

    // Finally return max argument in list
    return max;
}
