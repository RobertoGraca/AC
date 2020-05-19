#include "BSTree.h"
#include <stdio.h>

// Comparison function to be used in generic BSTree.
static int cmpTI(const void *a, const void *b) {
  return (int*)a - (int*)b;
}

// Printing function to be used in generic BSTree.
static void printTI(void *ti) {
  printf("%d\n", *(int*)ti);
}

int main(void){
    BSTree* bst = BSTreeCreate(cmpTI,printTI);
    BSTreeAdd(bst,(int*)3);
    BSTreeAdd(bst,(int*)1);
    BSTreeAdd(bst,(int*)5);
    BSTreeAdd(bst,(int*)0);
    BSTreeAdd(bst,(int*)2);
    BSTreeAdd(bst,(int*)4);
    BSTreeAdd(bst,(int*)6);
    int* cmp = (int*)BSTreeGetKthItem(bst,0);
    printf("%d\n",*cmp);
    return 0;
}