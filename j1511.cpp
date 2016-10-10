#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
typedef struct LNode {
	int data;
	struct LNode *next;
	struct LNode *prior;
}LNode;
int main() {
	int data;
	LNode *p, *q;
	q = (LNode*)malloc(sizeof(LNode));
	p = q;
    p->prior = NULL;
    p->next = NULL;
	while (cin >> data) {
		if (data == -1) {
			break;
		}
		q = (LNode*)malloc(sizeof(LNode));
		q->data = data;
		q->prior = p;
		p->next = q;
		p = p->next;
	}
	q->next = NULL;
	while (p->prior) {//是个负的好大的数，并不是null,因为头结点
		printf("%d\n", p->data);
		p = p->prior;
	}
	return 1;
}
