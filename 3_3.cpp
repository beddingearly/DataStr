
/*
���Ա�Ĳ�����
��ʼ���������ձ�InitList(*L)
�ж��Ƿ�Ϊ��      ListEmpty(L)
����              ListInsert(*L, i, e)
ɾ��              ListDelete(*L, i, *e)
���              ClearList(*L)
�����ض�Ԫ�أ�����λ�� LocateElem(L,e)
�õ��ض���ֵ      GetElem(L, i, *e)
�õ�Ԫ�ظ���      ListLength(L)
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
