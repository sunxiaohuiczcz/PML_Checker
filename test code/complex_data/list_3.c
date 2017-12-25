#include<stdio.h>
#include<stdlib.h>
struct Node;
typedef struct Node* PtrNode;
typedef PtrNode Position;
typedef PtrNode List;
struct Node{
        int Value;
        PtrNode Next;
};

List create()
{
        int n=0;
        Position p,head,tmp;
        head=NULL;
        tmp=malloc(sizeof(struct Node));
        if(tmp==NULL)
        {
                printf("tmp malloc failed!\n");
                return NULL;
        }
	else
        {
                p=tmp;
                printf("please input the first node's message!\n");
                scanf("%d",&(tmp->Value));
        }
        while(tmp->Value!=-1)
        {
                n+=1;
                if(n==1)
                {
                        head=p;
                        tmp->Next=NULL;
                }
                else
                {
                        p->Next=tmp;
                }
                p=tmp;
                tmp=malloc(sizeof(struct Node));
                printf("please input the %d node!\n",n+1);
                scanf("%d",&(tmp->Value));
        }
        p->Next=NULL;
       // free(tmp);  
        tmp=NULL;
        return head;

}