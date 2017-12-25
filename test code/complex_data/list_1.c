#include <stdio.h>

typedef int ElemType;

typedef struct node {
	int data;
	struct node *prior,*next;
} *SqList;

SqList CreateList(int n) { // 创建单向非循环链表
	SqList head,p,q;
	head = p = (SqList)malloc(sizeof(node));
	for(int i = 0;i < n;i++) {
		q = (SqList)malloc(sizeof(node));
		q->data = 2*(i + 1);
		p->next = q;
		p = q;
	}
	p->next = NULL;
	return head;
}
void FreeList(SqList head) {
	SqList p,q;
	p = head;
	q = p->next;
	while(q != head) {
		p = q;
		q = p->next;
		//free(p);
	}
	//free(head);
}

int main() {
	SqList head = CreateList(10); // head为非循环链表
	FreeList(head);
	return 0;
}
