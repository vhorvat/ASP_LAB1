#include <stdio.h>
#include <stdlib.h>

double expo(double x, int n, int *fakt, double *xpot){
    int i = 0, prethodnifakt = 1;
    if (n==1) return 1;
    if (n==2) return x + 1;
    do{
        i++;
        prethodnifakt = prethodnifakt*i;
    }while(prethodnifakt != *fakt);
    *xpot = (*xpot)*x;
    *fakt = (*fakt)*(i+1);
    return *xpot/(*fakt)+expo(x,n-1, fakt, xpot);
}

int main(void){
    int n,i,fakt;
    double xpot;
    float *A, x;
    printf("Unesi broj članova polja:");
    scanf("%d", &n);
    printf("Unesi potenciju:");
    scanf("%f", &x);
    A = malloc(n*sizeof(float));
    for (i=0;i<n;i++){
        fakt=1;
        xpot=x;
        *(A+i)=expo(x,i+1,&fakt,&xpot);
        printf("%f ",*(A+i));
    }


    return 0;

}