#include <stdio.h>

static long nops = 0;

int motzkinRec(int n){
    if(n<2)return 1;
    else{
        int i,sum=0;
        for(i=0;i<=n-2;i++){
            nops++;
            sum += motzkinRec(i)*motzkinRec(n-2-i);
        }
        return motzkinRec(n-1) + sum;
    }
}

int main(void){
    int i=0;
    long res;
    for(;i<16;i++){
        res = motzkinRec(i);
        printf("%2d -> Resultado = %8ld | NOps = %8ld\n",i,res,nops);
        nops = 0;
    }
    return 0;
}