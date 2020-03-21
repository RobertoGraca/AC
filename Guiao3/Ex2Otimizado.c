#include <stdio.h>

int nops=0;

int getIndex(int a[],int n){
    unsigned int i=n-1,j=0,max=0,cont=0,index=-1;
    for(;i>0;i--){
        if(max>i)break;
        if(a[i-1]==a[i]){
            nops++;
            index=i-1;
            continue;
        }
        if(a[i]<a[i+1] && i!=n-1){
            nops++;
            continue;
        }
        cont=0;
        for(j=0;j<i;j++){
            if(a[j]<a[i]){
                cont++;
            }
            nops++;
        }
        if(cont>=max){
            max=cont;
            index=i;
        }
    }
    return (index==0)? -1:index;
}

int recursion(int n){
    if(n==0)return 0;
    else if(n==1)return 1;
    else{
        return n+recursion(n-1);
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
    printf("seq1  -> Resultado = %2d | NOps = %2d | recursion = %2d\n",res,nops,recursion(siz-1));
    nops=0;
    siz = sizeof(seq2)/sizeof(seq2[0]);
    res = getIndex(seq2,siz);
    printf("seq2  -> Resultado = %2d | NOps = %2d | recursion = %2d\n",res,nops,recursion(siz-1));
    nops=0;
    siz = sizeof(seq3)/sizeof(seq3[0]);
    res = getIndex(seq3,siz);
    printf("seq3  -> Resultado = %2d | NOps = %2d | recursion = %2d\n",res,nops,recursion(siz-1));

    return 0;
}