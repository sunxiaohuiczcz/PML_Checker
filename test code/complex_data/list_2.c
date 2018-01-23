/*20171108*/
/*memory leak in list(2)*/
#include <stdio.h>
struct NODE {
    int  data;
    struct NODE *next;
} H,*head,*p,*q,*s1,*s2,*s3,*s4,*s;
int i,j,k,n,t,m;
int main() {

    H.data=-1;
    H.next=NULL;
    head=&H;

    p=head;
    for (i=0;i<10;i++) {
        q=(struct NODE *)malloc(sizeof(struct NODE));
        if (NULL==q) return 1;
        q->data=rand()%100;/
        q->next=NULL;
        p->next=q;
        p=q;
    }

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

    s=head->next;
    while (1) {
        if (NULL==s) {
            printf("\n");
            break;
        }
        printf("%02d->",s->data);
        s=s->next;
    }

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

    s=head->next;
    while (1) {
        if (NULL==s) {
            printf("\n");
            break;
        }
        printf("%02d->",s->data);
        s=s->next;
    }

 
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