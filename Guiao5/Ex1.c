#include <stdio.h>

static int numRec=-1;

int func1(int n){
    numRec++;
    if(n==0)return 0;
    else return func1(n/3)+n;
}

int func2(int n){
    numRec++;
    if(n<=2)return n;
    else return func2(n/3)+func2((n+2)/3)+n;
}

int func3(int n){
    numRec++;
    if(n<=2)return n;
    else if(n%3==0) return 2*func3(n/3)+n;
    else return func3(n/3)+func3((n+2)/3)+n;
}


int main(void){
    int i,x;
    for(i=0;i<=28;i++){
        numRec=-1;
        x = func1(i);
        printf("i = %3d \t Func1 -> Resultado: %3d --- NumRec: %3d\t",i, x, numRec);
        numRec=-1;
        x = func2(i);
        printf("| Func2 -> Resultado: %3d --- NumRec: %3d\t", x, numRec);
        numRec=-1;
        x = func3(i);
        printf("| Func3 -> Resultado: %3d --- NumRec: %3d\n", x, numRec);
    }
}