#include <iostream>
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define MAXSIZE 20
typedef int ElemType;
typedef int Status;

typedef struct{
    ElemType data[MAXSIZE];//����data�����Ĵ洢λ�þ��Ǵ洢�ռ�Ĵ洢λ��
    int length;//���鵱ǰ����
}SqList;

Status InitList(SqList *L){
    L->length = 0;

}

//���Ԫ�ز���
Status GetElem(SqList L, int i, ElemType *e){
    if(L.length == 0 || i < 1 || i > L.length)
        return ERROR;
    *e = L.data[i-1];//���������ʱ�򣬡�������������Ԫ�صĸ�������1��ʼ�����������ʱ�򡾡�������ţ���0��ʼ
    return OK;
}
//�������
Status ListInsert(SqList *L, int i, ElemType e){
    if(L->length >= MAXSIZE)//������Ա����������󳤶�
        return ERROR;
    if(i < 1 || i > L -> length)//��i���ڷ�Χ֮��
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
//�����ܱ���Ŷ�1
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
