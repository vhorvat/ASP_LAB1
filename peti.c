#include <stdio.h>
#include <stdlib.h>

int BinarnoTrazi(float *polje, int n, float x){
    int donja=0,gornja=n-1,srednja;
    do {
        srednja = (donja+gornja)/2;
        if (x==*(polje+srednja)) {
            return srednja;
        }
        else if (x>*(polje+srednja)){
            donja=srednja+1;
        }
        else {
            gornja=srednja-1;
        }
    } while (donja<=gornja);
        return -1;
}

int main(){
    int br;
    float x;
    int i;
    float *A;
    int lokacija;
    printf("Unesi broj članova polja i traženi broj X;");
    scanf("%d %f",&br,&x);
    A=malloc(sizeof(float)*br);
    for (i=0;i<br;i++){
        *(A+i)=1.1*i;
        printf("%.2f \n",*(A+i));
    }
    lokacija=BinarnoTrazi(A,br,x);
    printf("%d", lokacija);
    return 0;

}