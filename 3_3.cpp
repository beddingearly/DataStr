
/*
线性表的操作：
初始化（建立空表）InitList(*L)
判断是否为空      ListEmpty(L)
插入              ListInsert(*L, i, e)
删除              ListDelete(*L, i, *e)
清空              ClearList(*L)
查找特定元素，返回位置 LocateElem(L,e)
得到特定数值      GetElem(L, i, *e)
得到元素个数      ListLength(L)
*/

//A = AUB,
void union(List *La, List Lb){
    int La_len, Lb_len, i;
    ElemType e;
    La_len = ListLength(La);
    Lb_len = Listlength(Lb);
    for(i = 1; i <= Lb_len; i++){
        GetElem(Lb, i, e);
        if(!LocateElem(La, e, equal))
            ListInsert(La, ++La_len, e);
    }
}
