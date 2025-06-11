#include<stdio.h>

int tribonacci(int n)
{
    int T0 = 0;
    int T1 = 1;
    int T2 = 1;

    switch (n)
    {
    case 0:
        return 0;
    case 1:
        return 1;
    case 2:
        return 1;
    }

    for (int i = 3; i <= n; i++)
    {
        int temp = T0 + T1 + T2;
        T0 = T1;
        T1 = T2;
        T2 = temp;
    }

    return T2;
}

void main(){
 
    int N = tribonacci(10);
    printf("%d", N);

}