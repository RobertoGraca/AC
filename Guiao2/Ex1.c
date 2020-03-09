#include <stdio.h>
#include <math.h>
#include "elapsed_time.h"

long nops=0;

__u_long recursiva(int n){
    if(n==0){
        nops++;
        return 0;
    }
    else if(n==1){
        nops++;
        return 1;
    }
    else{
        nops++;
        return (3*recursiva(n-1) + 2*recursiva(n-2));
    }
}

int main(void){
    unsigned int i=0;
    puts("    n          resultado             nops          tempo\n");
    for(;i<=50;i++){
        elapsed_time();
        nops=0;
        printf("%5d\t",i);
        printf("%20ld\t",recursiva(i));
        printf("%10ld\t",nops);
        printf("%.9f\n",elapsed_time());
    }
    return 0;
}