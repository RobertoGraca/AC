#include <stdio.h>

int nops=0;

int isArithmetic1(int a[],int n){
    unsigned int i=0;
    for(;i<n-1;i++){
        nops++;
        if(a[i+1]-a[i]!=1){
            return 0;
        }
    }
    return 1;
}

int main(void){
    int seq1[10] = {1,3,4,5,5,6,7,7,8,9};
    int seq2[10] = {1,2,4,5,5,6,7,8,8,9};
    int seq3[10] = {1,2,3,6,8,8,8,9,9,9};
    int seq4[10] = {1,2,3,4,6,7,7,8,8,9};
    int seq5[10] = {1,2,3,4,5,7,7,8,8,9};
    int seq6[10] = {1,2,3,4,5,6,8,8,9,9};
    int seq7[10] = {1,2,3,4,5,6,7,9,9,9};
    int seq8[10] = {1,2,3,4,5,6,7,8,8,9};
    int seq9[10] = {1,2,3,4,5,6,7,8,9,9};
    int seq10[10] = {1,2,3,4,5,6,7,8,9,10};

    unsigned int res,siz;

    nops=0;
    siz = sizeof(seq1)/sizeof(seq1[0]);
    res = isArithmetic1(seq1,siz);
    printf("seq1  -> Resultado = %2d | NOps = %2d\n",res,nops);
    nops=0;
    siz = sizeof(seq2)/sizeof(seq2[0]);
    res = isArithmetic1(seq2,siz);
    printf("seq2  -> Resultado = %2d | NOps = %2d\n",res,nops);
    nops=0;
    siz = sizeof(seq3)/sizeof(seq3[0]);
    res = isArithmetic1(seq3,siz);
    printf("seq3  -> Resultado = %2d | NOps = %2d\n",res,nops);
    nops=0;
    siz = sizeof(seq4)/sizeof(seq4[0]);
    res = isArithmetic1(seq4,siz);
    printf("seq4  -> Resultado = %2d | NOps = %2d\n",res,nops);
    nops=0;
    siz = sizeof(seq5)/sizeof(seq5[0]);
    res = isArithmetic1(seq5,siz);
    printf("seq5  -> Resultado = %2d | NOps = %2d\n",res,nops);
    nops=0;
    siz = sizeof(seq6)/sizeof(seq6[0]);
    res = isArithmetic1(seq6,siz);
    printf("seq6  -> Resultado = %2d | NOps = %2d\n",res,nops);
    nops=0;
    siz = sizeof(seq7)/sizeof(seq7[0]);
    res = isArithmetic1(seq7,siz);
    printf("seq7  -> Resultado = %2d | NOps = %2d\n",res,nops);
    nops=0;
    siz = sizeof(seq8)/sizeof(seq8[0]);
    res = isArithmetic1(seq8,siz);
    printf("seq8  -> Resultado = %2d | NOps = %2d\n",res,nops);
    nops=0;
    siz = sizeof(seq9)/sizeof(seq9[0]);
    res = isArithmetic1(seq9,siz);
    printf("seq9  -> Resultado = %2d | NOps = %2d\n",res,nops);
    nops=0;
    siz = sizeof(seq10)/sizeof(seq10[0]);
    res = isArithmetic1(seq10,siz);
    printf("seq10 -> Resultado = %2d | NOps = %2d\n",res,nops);
    return 0;
}