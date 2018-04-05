#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double pi(int n){
    printf("%f %d\n",pow(-1,n+1)*1/(n+2),n);
    if (n==1){
        return (double) 1;
    }

    return (double) (pow(-1,n+1)*1/(2*n-1))+pi(n-1);
}


int main(void){
    int n,i;
    float *A;
    printf("Unesi broj članova polja");
    scanf("%d",&n);
    A=malloc(sizeof(float)*n);
    for (i=0;i<n;i++){
        *(A+i)=4*pi(i+1);
    }
    for (i=0;i<n;i++){
        printf("%f ",*(A+i));
    }

}
