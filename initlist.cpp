#include "sqlist.h"
#include <stdio.h>
#include <stdlib.h>

int InitList_sq(Sqlist &L){
    L.elem = (ElemType *)malloc(LIST_INIT_SIZE * sizeof(ElemType));
    if(!L.elem)
        exit(OVERFLOW);
    L.length = 0;
    L.listsize = LIST_INIT_SIZE;
    printf("hello\n");
    return 1;
}

int main(){
    Sqlist l;
    InitList_sq(l);
    return 0;
}

