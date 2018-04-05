#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void f(int *polje, int n, int m){
    if (n==0){
        return ;
    } else {
        *(polje+n-1) = pow(m, n-1);
    }
    f(polje,--n,m);
}

int main(){
    int n,m,*polje,i;
    printf("Unesi cijele brojeve m i n:");
    scanf("%d %d",&m,&n);
    polje=malloc(sizeof(int)*n);
    f(polje, n, m);
    for(i=0; i<n;i++) printf("[%d] = %d\n", i, *(polje+i));
    return 0;

}