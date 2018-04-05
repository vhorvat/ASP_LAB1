#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *ostaviSlova(char *niz){
    int n,i,j=0;
    char *noviniz;
    n=strlen(niz);
    noviniz=malloc(sizeof(char)*n);
    for (i=0;i<n;i++){
        if (isalpha(*(niz+i))){
            *(noviniz+j)=*(niz+i);
            j++;
        }
    }
    *(noviniz+j)='\0';
    return noviniz;
}

int main(){
    char *niz = "asp12_i_ASP13";
    char *noviniz;
    noviniz=ostaviSlova(niz);
    printf("%s",noviniz);


}