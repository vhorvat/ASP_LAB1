#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int zbrojiKvadrate(int *polje, int n){
    if (n==0){
        return 0;
    }
    if ((int)sqrt(*polje)==sqrt(*polje)){
        return(*polje + zbrojiKvadrate(polje+1,--n));
    }
    return zbrojiKvadrate(polje+1,--n);
}

int main(void){
    int n,*polje,i,a;
    printf("Unesi broj članova polja:");
    scanf("%d",&n);
    polje=malloc(sizeof(int)*n);
    srand((unsigned) time(NULL));
    for (i=0;i<n;i++){
        *(polje+i)=rand()%100;
        printf("%d ",*(polje+i));
    }
    a=zbrojiKvadrate(polje, n);
    printf("\n%d",a);
    return 0;


}