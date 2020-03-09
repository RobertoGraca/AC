#include <stdio.h>
#include <math.h>
#include "elapsed_time.h"

long nops=0;

__u_long recorrencia(int n){
    nops++;
    __u_long left = pow(0.5*(3+sqrt(17)),n);
    __u_long right = pow(0.5*(3-sqrt(17)),n);
    return (left-right)/sqrt(17);
}

int main(void){
    unsigned int i=0;
    puts("    n          resultado             nops          tempo\n");
    for(;i<=50;i++){
       nops=0;
        printf("%5d\t",i);
        printf("%20ld\t",recorrencia(i));
        printf("%10ld\t",nops);
        printf("%.9f\n",elapsed_time());
    }
    return 0;
}