#include <iostream>
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define MAXSIZE 20
typedef int ElemType;
typedef int Status;

typedef struct{
    ElemType data[MAXSIZE];//数据data，它的存储位置就是存储空间的存储位置
    int length;//数组当前长度
}SqList;

Status InitList(SqList *L){
    L->length = 0;

}

//获得元素操作
Status GetElem(SqList L, int i, ElemType *e){
    if(L.length == 0 || i < 1 || i > L.length)
        return ERROR;
    *e = L.data[i-1];//定以数组的时候，【】里面是数组元素的个数，从1开始，单个数组的时候【】内是序号，从0开始
    return OK;
}
//插入操作
Status ListInsert(SqList *L, int i, ElemType e){
    if(L->length >= MAXSIZE)//这个线性表超过数组的最大长度
        return ERROR;
    if(i < 1 || i > L -> length)//在i不在范围之内
        return ERROR;
    if(i <= L->length){
        for(int k = L->length; k >= i - 1; k--)
            L->data[k+1] = L->data[k];
    }
    L->data[i] = e;
    L->length++;
    for(int i = 0; i < L->length; i++){
        std::cout << L->data[i] << std::endl;
    }
    return OK;
}
//长度总比序号多1
Status ListDelete(SqList *L, int i, int *e){
    if(L->length==0)
        return ERROR;
    if(i < 1 || i > L->length)
        return ERROR;
    *e = L->data[i];
    if(i < L->length){
        for(int k = i; k <= L->length-1; k++)
            L->data[k] = L->data[k + 1];
    }
    L->length--;
    return OK;
}

Status CreateList(SqList *L){
    for(int i = 0; i < 3; i++){
        std::cin >> L->data[i];
        L->length++;
    }
}

int main(){
    SqList L;
    InitList(&L);
    CreateList(&L);
    ListInsert(&L, 1, 1);

}
