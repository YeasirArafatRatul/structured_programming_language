/* This program prints the fibonacci series till the number given by the user.

First 10 Numbers of Fibonacci series are:
0, 1, 1, 2, 3, 5, 8, 13, 21, 34
|  |  |  |  |  |  |   |   |   | 
1  2  3  4  5  6  7   8   9  10 - indexing 

Each number is the sum of the previous two numbers.

index[3] = 1 = 1 + 0 = 1
index[4] = 2 = 1 + 1 = 2
index[5] = 3 = 2 + 1 = 3
index[6] = 5 = 3 + 2 = 5
index[7] = 8 = 5 + 3 = 8
index[8] = 13 = 8 + 5 = 13
index[9] = 21 = 13 + 8 = 21
index[10] = 34 = 21 + 13 = 34


(C) - Copyright 2022 - Yeasir Arafat Ratul */

#include <stdio.h>


int main()
    {
    // Declare variables
    int n1 = 0, n2 = 1, next_fibonacci_n, total_terms, i;

    printf("Number of fibonacci terms you wanna know - ");
    scanf("%d", &total_terms); //number of fibonacci terms user wants to get

    printf("Your desired series: 0 1"); //as the first two terms are 0 and 1, I printed it to have a easy output

    for(i = 3; i <= total_terms; i++){ 
        /* this loop will help to print as many terms as user wants to get. 
        it started from 3 because we know the past 2 terms which are 0 and 1 and they are constant.
        They have been printed in the previous line */

        next_fibonacci_n = n1 + n2; // formula to get next term of fibonacci series

        // as the fibonacci series moves forward, so the n1 and n2 will have to be changed.
        n1 = n2; 
        n2 = next_fibonacci_n;

        /*
        In  first iteration, n1 = 0 and n2 = 1. So, next_fionacci_n = n1 + n2 = 0 + 1 = 1. 
        Then n1 = n2, So n1 becomes 1 and n2 = next_fibonacci_n, So n2 becomes 1.

        In second iteration, n1 = 1 and n2 = 1. So, next_fionacci_n = n1 + n2 = 1 + 1 = 2. 
        Then n1 = n2, So n1 becomes 1 and n2 = next_fibonacci_n, So n2 becomes 2.

        In third iteration, n1 = 1 and n2 = 2. So, next_fionacci_n = n1 + n2 = 1 + 2 = 3. 
        Then n1 = n2, So n1 becomes 2 and n2 = next_fibonacci_n, So n2 becomes 3.

        In fourth iteration, n1 = 2 and n2 = 3. So, next_fionacci_n = n1 + n2 = 2 + 3 = 5. 
        Then n1 = n2, So n1 becomes 3 and n2 = next_fibonacci_n, So n2 becomes 5.

        In fifth iteration, n1 = 3 and n2 = 5. So, next_fionacci_n = n1 + n2 = 3 + 5 = 8. 
        Then n1 = n2, So n1 becomes 5 and n2 = next_fibonacci_n, So n2 becomes 8.
  
        ...
        ...
        will continue like that until 'i' <= total_terms */
        */

        printf(" %d", next_fibonacci_n); // printing next Fibonacci number
    }

return 0;
}