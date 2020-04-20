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

int motzkinPD(int n){
    int din[n+1];

    din[0] = din[1] = 1;

    int k,i,sum=0;

    for(i=2;i<=n;i++){
        sum = 0;
        for(k=0;k<=i-2;k++){
            nops++;
            sum += din[k]*din[i-2-k];
        }
        din[i] = din[i-1] + sum;
    }

    return din[n];    
}

int main(void){
    int i=0;
    int resRec,resPD;
    printf("\tResRec   NopsRec   ResPD    NopsPD\n");
    for(;i<16;i++){
        resRec = motzkinRec(i);
        printf("%2d -> %8d %8ld",i,resRec,nops);
        nops = 0;
        resPD = motzkinPD(i);
        printf("%8d %8ld\n",resPD,nops);
        nops = 0;
    }
    return 0;
}