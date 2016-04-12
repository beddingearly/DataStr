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

Status ListInsert(LinkList *L, int i, ElemType e){
    LinkList p, s;
    p = *L;
    int j = 1;
    while(p && j < i){
        p = p->next;
        ++j;
    }
    if(!p || j > i)//线性表的链式存储结构
        return ERROR;
    s = (LinkList)malloc(sizeof(Node));
    s -> data = e;
    s->next = p->next;
    p->next = s;
    return OK;
}

Status ListDelete(LinkList *L, int i, ElemType *e){
    int j = 1;
    LinkList p, q;//need two pointers at the front and behind of the delete one
    p = *L;
    while(p->next && j < i){
        p = p->next;
        ++j;//线性表的链式存储结构
    }
    if(!(p->next) || j > i)
        return ERROR;
    q = p->next;
    p->next = q->next;
    *e = q->data;
    free(q);
    return OK;
}

