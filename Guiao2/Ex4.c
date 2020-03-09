#include <stdio.h>
#include <math.h>
#include "elapsed_time.h"

long nops=0;

__u_long termoMaisImportante(int n){
    nops++;
    return round(pow(0.5*(3+sqrt(17)),n)*(1/sqrt(17)));
}

__u_long termoMaisImportante2(int n){
    nops++;
    return pow(0.5*(3+sqrt(17)),n)*(1/sqrt(17))+0.5;
}

int main(void){
    unsigned int i=0;puts("    n          resultado             nops          tempo          resultado             nops          tempo\n");
    for(;i<=50;i++){
        nops=0;
        printf("%5d\t",i);
        printf("%20ld\t",termoMaisImportante(i));
        printf("%10ld\t",nops);
        printf("%.9f\t",elapsed_time());
        nops=0;
        printf("%20ld\t",termoMaisImportante2(i));
        printf("%10ld\t",nops);
        printf("%.9f\n",elapsed_time());
    }
    return 0;
}