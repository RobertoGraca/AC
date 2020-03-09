#include <stdio.h>

void printArray(char* s, int a[],int n){
    printf("%s : ",s);
   for(int i=0;i<n;i++){
       printf("%d ",a[i]);
   }
    puts(" ");
}

void cumSum(int a[], int b[],int n){
    unsigned int c=0,i=0;
    for(;i<n;i++){
        c += a[i];
        b[i] = c;
    }
}

void main(void){
    int a[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    printArray("a",a,sizeof(a)/4);

    int b[12];
    cumSum(a,b,sizeof(a)/4);
    printArray("b",b,sizeof(b)/4);
}