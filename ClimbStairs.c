#include<stdio.h>

int climbStairs(int n) {
    int DP[n];
    DP[0] = 1;
    DP[1] = 2;

    if(n < 3){
        return n;
    }else{
        int index = 2;
        for(; index<n; index++){
            DP[index] = DP[index-1] + DP[index-2];
        }
        return DP[index-1];
    }

}

void main(){

    climbStairs(10);

}