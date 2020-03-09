#include <stdio.h>

int nops=0;

int getIndex(int a[],int n){
    unsigned int i=1,j=0,max=0,cont=0,index=0;
    for(;i<n;i++){
        cont=0;
        for(j=0;j<i;j++){
            if(a[j]<a[i]){
                cont++;
            }
            nops++;
        }
        if(cont>max){
            max=cont;
            index=i;
        }
    }
    if(index<=0){
        return -1;
    }
    else{
        return index;
    }
}


int main(void){
    int seq1[10] = {1,9,2,8,3,4,5,3,7,2};
    int seq2[10] = {1,7,4,6,5,2,3,2,1,0};
    int seq3[10] = {2,2,2,2,2,2,2,2,2,2};

    int res,siz;

    nops=0;
    siz = sizeof(seq1)/sizeof(seq1[0]);
    res = getIndex(seq1,siz);
    printf("seq1  -> Resultado = %2d | NOps = %2d\n",res,nops);
    nops=0;
    siz = sizeof(seq2)/sizeof(seq2[0]);
    res = getIndex(seq2,siz);
    printf("seq2  -> Resultado = %2d | NOps = %2d\n",res,nops);
    nops=0;
    siz = sizeof(seq3)/sizeof(seq3[0]);
    res = getIndex(seq3,siz);
    printf("seq3  -> Resultado = %2d | NOps = %2d\n",res,nops);

    return 0;
}