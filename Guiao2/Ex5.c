#include <stdio.h>
#include <math.h>
#include "elapsed_time.h"

long nops=0;

__u_long exponencial(int n){
    double c1 = 0.24253562503633297352;
    double c2 = 1.27019663313689157536;
    return round(c1 * exp(c2*n));
}

int main(void){
    unsigned int i=0;
    puts("    n          resultado             nops          tempo\n");
    for(;i<=50;i++){
        nops=0;
        printf("%5d\t",i);
        printf("%20ld\t",exponencial(i));
        printf("%10ld\t",nops);
        printf("%.9f\n",elapsed_time());
    }
    return 0;
}