#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
typedef struct LNode {
	int data;
	struct LNode *next;
	struct LNode *prior;
}LNode;
int main(){
    int n, data;
    while(scanf("%d", &n) != EOF){
        if(n == 0){
            printf("NULL\n");
        }
        else{
            LNode *p, *q;
            q = (LNode*)malloc(sizeof(LNode));
            p = q;
            p->next = NULL;
            p->prior = NULL;
            while(n--){
                q = (LNode*)malloc(sizeof(LNode));
                cin >> data;
                q->data = data;
                p->next = q;
                q->prior = p;
                p = p->next;
            }
            q->next = NULL;
            printf("%d", p->data);
            p = p->prior;
            while (p->prior) {
                printf(" %d", p->data);
                p = p->prior;
            }
            printf("\n");
        }
    }
    return 0;
}
