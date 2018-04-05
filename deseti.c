#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int fact(int n){
    if (n==0){
        return 1;
    }
    return n*fact(n-1);
}

double f(double z,int k){
    if (k==0){
        return z;
    }
    return (pow(-1,k)*pow(z,2*k+1))/(fact(2*k+1));
}

int main(){
    double z = 0.5;
    int k=1;
    while (k > 0){
        printf("Unesi k\n");
        scanf("%d",&k);
        printf("%.20f\n",f(z,k));
    }
}