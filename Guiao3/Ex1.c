#include <stdio.h>

int nops=0;

int checkDifferent(int a[],int n){
    unsigned int i=1,cont=0;
    for(;i<n;i++){
        if(a[i]!=a[i-1]){
            cont++;
        }
    nops++;
    }
    return cont;
}


int main(void){
    int seq1[10]  = {3,3,3,3,3,3,3,3,3,3};
    int seq2[10]  = {4,3,3,3,3,3,3,3,3,3};
    int seq3[10]  = {4,5,3,3,3,3,3,3,3,3};
    int seq4[10]  = {4,5,1,3,3,3,3,3,3,3};
    int seq5[10]  = {4,5,1,2,3,3,3,3,3,3};
    int seq6[10]  = {4,5,1,2,6,3,3,3,3,3};
    int seq7[10]  = {4,5,1,2,6,8,3,3,3,3};
    int seq8[10]  = {4,5,1,2,6,8,7,3,3,3};
    int seq9[10]  = {4,5,1,2,6,8,7,9,3,3};
    int seq10[10] = {4,5,1,2,6,8,7,9,3,0};

    unsigned int res,siz;

    nops=0;
    siz = sizeof(seq1)/sizeof(seq1[0]);
    res = checkDifferent(seq1,siz);
    printf("seq1  -> Resultado = %2d | NOps = %2d\n",res,nops);
    nops=0;
    siz = sizeof(seq2)/sizeof(seq2[0]);
    res = checkDifferent(seq2,siz);
    printf("seq2  -> Resultado = %2d | NOps = %2d\n",res,nops);
    nops=0;
    siz = sizeof(seq3)/sizeof(seq3[0]);
    res = checkDifferent(seq3,siz);
    printf("seq3  -> Resultado = %2d | NOps = %2d\n",res,nops);
    nops=0;
    siz = sizeof(seq4)/sizeof(seq4[0]);
    res = checkDifferent(seq4,siz);
    printf("seq4  -> Resultado = %2d | NOps = %2d\n",res,nops);
    nops=0;
    siz = sizeof(seq5)/sizeof(seq5[0]);
    res = checkDifferent(seq5,siz);
    printf("seq5  -> Resultado = %2d | NOps = %2d\n",res,nops);
    nops=0;
    siz = sizeof(seq6)/sizeof(seq6[0]);
    res = checkDifferent(seq6,siz);
    printf("seq6  -> Resultado = %2d | NOps = %2d\n",res,nops);
    nops=0;
    siz = sizeof(seq7)/sizeof(seq7[0]);
    res = checkDifferent(seq7,siz);
    printf("seq7  -> Resultado = %2d | NOps = %2d\n",res,nops);
    nops=0;
    siz = sizeof(seq8)/sizeof(seq8[0]);
    res = checkDifferent(seq8,siz);
    printf("seq8  -> Resultado = %2d | NOps = %2d\n",res,nops);
    nops=0;
    siz = sizeof(seq9)/sizeof(seq9[0]);
    res = checkDifferent(seq9,siz);
    printf("seq9  -> Resultado = %2d | NOps = %2d\n",res,nops);
    nops=0;
    siz = sizeof(seq10)/sizeof(seq10[0]);
    res = checkDifferent(seq10,siz);
    printf("seq10 -> Resultado = %2d | NOps = %2d\n",res,nops);
    return 0;
}