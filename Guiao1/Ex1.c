#include <stdio.h>

static unsigned int numIt=0;

unsigned int f1(unsigned int n){
    unsigned int i, j,r= 0;
    for(i = 1; i <= n; i++){
        for(j = 1; j <=n;j++){
            r += 1;
            numIt++;
        }
    }
    return r;
}

unsigned int f2(unsigned int n){
    unsigned int i, j,r= 0;
    for(i = 1; i <= n; i++){
        for(j = 1; j <=i;j++){
            r += 1;
            numIt++;
        }
    }
    return r;
}

unsigned int f3(unsigned int n){
    unsigned int i, j,r= 0;
    for(i = 1; i <= n; i++){
        for(j = i; j <=n;j++){
            r += j;
            numIt++;
        }
    }
    return r;
}

unsigned int f4(unsigned int n){
    unsigned int i, j,r= 0;
    for(i = 1; i <= n; i++){
        for(j = i; j >= 1;j/=10){
            r += i;
            numIt++;
        }
    }
    return r;
}



void main(void){
    unsigned int i=1,r;
    puts("    n\tf1(n)\tnumIt\tf2(n)\tnumIt\tf3(n)\tnumIt\tf4(n)\tnumIt");
    for(;i<=15;i++){
        printf("%5d\t",i);

        numIt=0;
        r = f1(i);
        printf("%5d\t%5d\t",r,numIt);

        numIt=0;
        r = f2(i);
        printf("%5d\t%5d\t",r,numIt);

        numIt=0;
        r = f3(i);
        printf("%5d\t%5d\t",r,numIt);

        numIt=0;
        r = f4(i);
        printf("%5d\t%5d\n",r,numIt);
    }
}