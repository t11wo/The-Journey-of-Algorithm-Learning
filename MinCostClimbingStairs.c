#include<stdio.h>

int min(int a, int b)
{
    return a > b ? b : a;
}

int minCostClimbingStairs_1(int *cost, int costSize)
{
    if (costSize <= 0)
    {
        return 0;
    }

    if (costSize == 1)
    {
        return cost[0];
    }

    int DP[costSize];

    DP[0] = cost[0];
    DP[1] = cost[1];

    for (int i = 2; i < costSize; i++)
    {
        DP[i] = cost[i] + min(DP[i - 1], DP[i - 2]);
    }

    return min(DP[costSize - 1], DP[costSize - 2]);
}

int minCostClimbingStairs_2(int *cost, int costSize)
{

    if (costSize <= 0)
    {
        return 0;
    }

    if (costSize == 1)
    {
        return cost[0];
    }

    int NUM1 = cost[0];
    int NUM2 = cost[1];

    for (int i = 2; i < costSize; i++)
    {
        int temp = cost[i] + min(NUM1, NUM2);
        NUM1 = NUM2;
        NUM2 = temp; 
    }

    return min(NUM1, NUM2);
}

void main()
{
    int COST[3] = {1, 4, 1};
    int SIZE = 3;

    int result = minCostClimbingStairs_2(COST, SIZE);
    printf("%d", result);
}