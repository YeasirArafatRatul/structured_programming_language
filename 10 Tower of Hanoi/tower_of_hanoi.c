#include <stdio.h>


void towerOfHanoi(int n, char from, char via, char to)
{
    if (n == 0)
    {
        return;
    }
    towerOfHanoi(n - 1, from, to, via);
    printf("Moved disk %d  from rod %c to rod %c\n", n, from, to);
    towerOfHanoi(n - 1, via, from, to);
}


// Driver code
int main()
{
    int n = 3; // Number of disks
    towerOfHanoi(n, 'A', 'B', 'C'); // A, B and C are names of rods
    return 0;
}
