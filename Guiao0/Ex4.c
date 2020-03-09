#include <stdio.h>
#include <math.h>

void main(void){
    unsigned int  ini, fin; 
    double rad,interval; 
    printf("Introduza o valor inicial do intervalo: ");
    scanf("%d",&ini);
    printf("Introduza o valor final do intervalo: ");
    scanf("%d",&fin);
    printf("Introduza o valor do intervalo entre angulos: ");
    scanf("%lf",&interval);
    printf("ang sin(ang)  cos(ang)\n");
    printf("--- --------  --------\n");
    double i=(double)ini;
    while(i<=(double)fin){
        rad = i * (M_PI / 180.0);
        printf("%2d  %f  %f\n",(int)i,sin(rad),cos(rad));
        i += interval; 
    }
}