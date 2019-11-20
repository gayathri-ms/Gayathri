#include <stdio.h>

// C recursive function to solve tower of hanoi puzzle
void towerOfHanoi(int n, int tower1, int tower2, int tower3)
{
    if (n == 1)
    {
        printf("\n Move disk 1 from tower %d to tower %d", tower1, tower2);
        return;
    }
    towerOfHanoi(n-1, tower1, tower3, tower2);
    printf("\n Move disk %d from tower %d to tower %d", n, tower1, tower2);
    towerOfHanoi(n-1, tower3, tower2, tower1);
}

int main()
{
    int n = 3; // Number of disks
    towerOfHanoi(n, 1, 3, 2);  // A, B and C are names of rods
    return 0;
}
