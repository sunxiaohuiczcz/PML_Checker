//带表头结点的单向链表
#include <stdio.h>

struct NODE {
    int  data;
    struct NODE *next;
} H,*head,*p,*q,*s1,*s2,*s3,*s4,*s;
int i,j,k,n,t,m;
int main() {
 
    //填写头节点数据
    H.data=-1;
    H.next=NULL;
    head=&H;
 
    //创建10个节点的单链表
    p=head;
    for (i=0;i<10;i++) {
        q=(struct NODE *)malloc(sizeof(struct NODE));
        if (NULL==q) return 1;
        q->data=rand()%100;//填写0..99的随机值
        q->next=NULL;
        p->next=q;
        p=q;
    }
    //将值为5的结点插入到单链表的第k个结点前
    k=3;
    n=0;
    p=head;
    while (1) {
        if (NULL==p) {
            break;
        }
        n++;
        if (k==n) {
            q=(struct NODE *)malloc(sizeof(struct NODE));
            if (NULL==q) return 1;
            q->data=5;
            q->next=p->next;
            p->next=q;
            break;
        }
        p=p->next;
    }
 
    //输出整个单链表
    s=head->next;
    while (1) {
        if (NULL==s) {
            printf("\n");
            break;
        }
        printf("%02d->",s->data);
        s=s->next;
    }
 
    //删除第k个节点
    k=5;
    n=0;
    p=head;
    while (1) {
        if (NULL==p) {
            break;
        }
        n++;
        if (k==n) {
            q=p->next;
            if (q) {
                p->next=q->next;
                free(q);
            }
            break;
        }
        p=p->next;
    }
 
    //输出整个单链表
    s=head->next;
    while (1) {
        if (NULL==s) {
            printf("\n");
            break;
        }
        printf("%02d->",s->data);
        s=s->next;
    }

 
    //释放所有节点
    p=head->next;
    while (1) {
        if (NULL==p) {
            break;
        }
        q=p->next;
        //free(p);
        p=q;
    }
 
    return 0;
}