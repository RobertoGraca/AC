#include <stdio.h>
#include <math.h>

int main( void ){
    int num;
    int i;
    printf("Introduza do número do intervalo: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        printf("Número -> %d\n", i);
        printf("Raíz quadrada -> %f\n",sqrt(i));
        printf("Quadrado -> %d\n\n",(i*i));
    }
    return 0;
}