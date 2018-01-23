/*20171108*/
/*memory leak in struct(1)*/
#include<stdio.h>
#include<stdlib.h>
int length;
struct Example *creat(void)
{
    struct Example *head;
    struct Example *p1, *p2;
    length = 0;
    p1 = p2 = (struct Example *)malloc(LEN);
    printf("Plseae input the num and class:\n");
    scanf_s("%d,%d", &p1->num, &p1->class);
    head = NULL;
    while (p1->num != 0)
    {
        ++length;
        if (length == 1)head = p1;
        else p2->next = p1;
        p2 = p1;
        p1 = (struct Example *)malloc(LEN);
        scanf_s("%d,%d", &p1->num, &p1->class);
    }
    p2->next = NULL;
    return (head);
}
void main()
{
    struct Example *pt;
    pt = creat();
    //printf("\nnum:%d\nclass:%d\n", pt->num, pt->class);
    for (int i = 0; i < length; i++)
    { 
        printf("\nnum:%d\nclass:%d\n", pt->num, pt->class);
        pt=pt->next;
    }
}