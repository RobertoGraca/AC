#include <stdio.h>
#include <assert.h>

int nComps=0, nShifts=0;

/*void repRemove(int *a,int *n){
    assert(*n>1);
    unsigned int i=0,j=0,k=0;

    for(;i<*n;i++){
        for(j=i+1;j<*n;j++){
            nComps++;
            if(a[i]==a[j]){
                for(k=j;k<*n-1;k++){
                    nShifts++;
                    a[k] = a[k+1];
                }
                (*n)--;
                j--;
            }
        }
    }
    
}*/

void repRemove(int *x, int *n){
    assert(*n>1);

    int *a;
    int *b;
    int *c;

    for(a=x;a<x+*n;a++){
        for(b=a+1;b<x+*n;b++){
            nComps++;
            if(*a==*b){
                for(c=b;c<x+*n-1;c++){
                    nShifts++;
                    *c = *(c+1);
                }
                (*n)--;
                b--; 
            }
        }
    }
}

int main(void){
    int seq1[10] = {1,2,2,2,3,3,4,5,8,8};
    int seq2[10] = {1,2,2,2,3,3,3,3,8,8};
    int seq3[7 ] = {1,2,3,2,1,3,4};
    int seq4[10] = {1,2,5,4,7,0,3,9,6,8};
    int seq5[10] = {1,1,1,1,1,1,1,1,1,1};


    int res,siz;


    nShifts=0;
    nComps=0;
    siz = sizeof(seq1)/sizeof(seq1[0]);
    repRemove(seq1,&siz);
    printf("seq1  -> NComps = %2d | NShifts = %2d | Resultado -> ",nComps,nShifts);
    printf("{");
    for(res=0;res<siz;res++){
        printf("%d, ",seq1[res]);
    }
    puts("}\n");


    nShifts=0;
    nComps=0;
    siz = sizeof(seq2)/sizeof(seq2[0]);
    repRemove(seq2,&siz);
    printf("seq2  -> NComps = %2d | NShifts = %2d | Resultado -> ",nComps,nShifts);
    printf("{");
    for(res=0;res<siz;res++){
        printf("%d, ",seq2[res]);
    }
    puts("}\n");


    nShifts=0;
    nComps=0;
    siz = sizeof(seq3)/sizeof(seq3[0]);
    repRemove(seq3,&siz);
    printf("seq3  -> NComps = %2d | NShifts = %2d | Resultado -> ",nComps,nShifts);
    printf("{");
    for(res=0;res<siz;res++){
        printf("%d, ",seq3[res]);
    }
    puts("}\n");


    nShifts=0;
    nComps=0;
    siz = sizeof(seq4)/sizeof(seq4[0]);
    repRemove(seq4,&siz);
    printf("seq4  -> NComps = %2d | NShifts = %2d | Resultado -> ",nComps,nShifts);
    printf("{");
    for(res=0;res<siz;res++){
        printf("%d, ",seq4[res]);
    }
    puts("}\n");


    nShifts=0;
    nComps=0;
    siz = sizeof(seq5)/sizeof(seq5[0]);
    repRemove(seq5,&siz);
    printf("seq5  -> NComps = %2d | NShifts = %2d | Resultado -> ",nComps,nShifts);
    printf("{");
    for(res=0;res<siz;res++){
        printf("%d, ",seq5[res]);
    }
    puts("}\n");

    return 0;
}