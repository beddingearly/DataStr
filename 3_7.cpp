//线性表的链式存储结构
#include <iostream>
using namespace std;

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
typedef int Status;
typedef int ElemType;

typedef struct Node{
    ElemType data;
    struct Node *next;
}Node, *LinkList;

Status GetElem(LinkList L, int i, ElemType *e){
    int j;
    LinkList p;
    p = L->next;
    j = 1;// reg
    while(p && j < i){
        p = p->next;
        ++j;
    }
    if(!p || j > i)
        return ERROR;
    *e = p->data;
    return OK;
}
