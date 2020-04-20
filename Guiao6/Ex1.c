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

int motzkinPD(int* din, int n){
    if(n<2)return 1;
    else{
        int i,sum=0;
        for(i=0;i<=n-2;i++){
            nops++;
            sum += din[i]*din[n-2-i];
        }
        return motzkinPD(din,n-1)+sum;
    }
}

int main(void){
    int i=0;
    int resRec;
    int din[15];
    printf("\tResRec   NopsRec   ResPD    NopsPD\n");
    for(;i<16;i++){
        resRec = motzkinRec(i);
        printf("%2d -> %8d %8ld",i,resRec,nops);
        nops = 0;
        din[i] = motzkinPD(din,i);
        printf("%8d %8ld\n",din[i],nops);
        nops = 0;
    }
    return 0;
}