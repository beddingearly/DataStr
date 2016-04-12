#include <iostream>
#include <cstdio>
#include <cstdlib>
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

//head pointer type LinkList
void CreateListHead(LinkList *L, int n){
    LinkList p;//后续结点指针，only need one pointer
    //srand(time(0));
    *L = (LinkList)malloc(sizeof(Node));
    (*L)->next = NULL;
    for(int i = 0; i < n; i++){
        p = (LinkList)malloc(sizeof(Node));
        p->data = rand()%100 + 1;
        p->next = (*L)->next;
        (*L)->next = p;
    }
}

//tail type need two pointers
 void CreateListTail(LinkList *L, int n){
    LinkList p, r;
    int i;
    //srand(time(0));
    *L = (LinkList)malloc(sizeof(Node));
    r = *L;//r points to the last node
    for(i = 0; i < n; i++){
        p = (Node*)malloc(sizeof(Node));
        p->data = rand()%100 + 1;
        r->next = p;
        r = p;
    }
    r->next = NULL;
 }
//all the way is to save the *L

