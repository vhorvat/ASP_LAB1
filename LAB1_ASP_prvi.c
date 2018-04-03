#include <stdio.h>
#include <stdlib.h>

void ispis(float *polje, int n){
    if (n==0){
        return;
    }
    else if (*polje<0){
        printf("%.2f",*(polje));
    }
    ispis(++polje,--n);
}


int main(void){
    int n,i;
    float *polje;
    printf("Unesi broj clanova polja:");
    scanf("%d",&n);
    polje=malloc(sizeof(float)*n);
    if ((polje=malloc(sizeof(float)*n))==NULL){
        printf("Ne može se alocirati memorija!");
        exit(1);
    }
    for (i=0;i<n;i++){
        printf("Ucitaj %d clan polja",i);
        scanf("%f ",(polje+i));
    }
    ispis(polje,n);
    return 0;

}