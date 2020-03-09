#include <stdio.h>
#include <math.h>
#include "elapsed_time.h"

long nops = 0;

__u_long iterativa(int n){
    unsigned long i=2,a=0,b=1,c;
    if(n==0){
        nops++;
        return 0;
    }
    else if(n==1){
        nops++;
        return 1;
    }
    else{
        for(;i<=n;i++){
            nops++;
            c = 3*b + 2*a;
            a = b;
            b = c; 
        }
        return c;
    } 
}

int main(void){
    unsigned int i=0;
    puts("    n          resultado             nops          tempo\n");
    for(;i<=50;i++){
        nops=0;
        printf("%5d\t",i);
        printf("%20ld\t",iterativa(i));
        printf("%10ld\t",nops);
        printf("%.9f\n",elapsed_time());
    }
    return 0;
}