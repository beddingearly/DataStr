#define OK
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define OVERFLOW 1
#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10

typedef int Status;
typedef int ElemType;
typedef struct{
    ElemType *elem;
    int length;
    int listsize;
}Sqlist;

/*
void InitList(List &L);
void DestroyList(List &L);
void ClearList(List &L);
void ListEmpty(List L);
void ListLength(List L)£»
void GetLength(List L, int i,ElemType &e);
void LocalElem(List L, ElemType e, compare());
void PriorElem(List L, ElemType cur_e, ElemType &pre_e);
void NextElem(List L, ElemType cur_e, ElemType &next_e);
void ListInsert(List &L, int i, ElemType e);
void ListDelete(List &L, int i, ElemType &e);
void ListTraverse(List L, visit());
*/
