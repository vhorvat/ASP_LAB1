#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#define MAXNIZ 100

char *noviniz(char *niz){
    int i=0,j=0,n=strlen(niz);
    char *noviniz;
    noviniz=malloc(sizeof(char)*n);
    while (*(niz+i) != '\0'){
        if(*(niz+i) == ' ' && *(niz+i+1) == ' '){
        } else {
            *(noviniz+j)=*(niz+i);
            j++;
        }
        i++;
    }
    *(noviniz+j)='\0';
    return noviniz;
}


int main(){
    char niz[MAXNIZ];
    printf("Unesi znakovni niz:");
    gets(niz);
    printf("Novi niz je: %s", noviniz(niz));
    return 0;

}