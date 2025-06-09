#include<stdio.h>

int fib(int n)
{
    int N[n + 1];

    N[0] = 0;
    N[1] = 1;

    if (n <= 1)
    {
        return n;
    }

    for (int i = 2; i <= n; i++)
    {
        N[i] = N[i - 1] + N[i - 2];
    }

    return N[n];
}

int Fib(int n){

    if(n <= 1){return n;}

    int A = 0;
    int B = 1;
    for(int i=2; i<=n;i++){
        int temp = A + B;
        A = B;
        B = temp;
    }
    return B;
}

void main(){
     int Test = 4;
     int result = Fib(Test);

     printf("%d",result);

}