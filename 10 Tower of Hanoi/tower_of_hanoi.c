#include <stdio.h>



int towerOfHanoi(int n, char from, char via, char to)
{
    static int count = 1;
    printf("%d\n", n);
    if (n == 0)
    {
        return;
    }
    count++;
    towerOfHanoi(n - 1, from, to, via);

    //printf("Moved disk %d  from rod %c to rod %c\n", n, from, to);

    towerOfHanoi(n - 1, via, from, to);
    count++;

    return count;
}


// Driver code
int main()
{
    int n = 4; // Number of disks
    int count = towerOfHanoi(n, 'A', 'B', 'C'); // A, B and C are names of rods
    printf("count %d", count);
    return 0;
}
