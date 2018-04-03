#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

void zamjena(int *a,int *b){
    int pom;
    pom=*a;
    *a=*b;
    *b=pom;
}

int *f(int *polje,int n){
    int *np=malloc(sizeof(int)*n);
    int j,i;
    srand((unsigned)time(NULL));
    for (i=0;i<n;i++){
        j=rand()%(n-i);
        *(np+i)=*(polje+j)*(*(polje+j));
        zamjena((polje+j),(polje+n-1-i));
    }
    return np;
}


int main(){
    int n,*polje,i,j;
    printf("Unesi cijeli broj n:\n");
    scanf("%d",&n);
    polje=malloc(sizeof(int)*n);
    for (i=0;i<n;i++){
        scanf("%d",&j);
        *(polje+i)=j;
    }
    polje=f(polje,n);
    for (i=0;i<n;i++) {
        printf("%d\n", *(polje + i));
    }
    return 0;
}
