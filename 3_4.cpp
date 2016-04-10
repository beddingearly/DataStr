/*线性表的存储结构*/

#define MAXSIZE 20
typedef int ElemType;
typedef struct{
    ElemType date[MAXSIZE];//数据data，它的存储位置就是存储空间的存储位置
    int length;//数组当前长度

}SqList;
