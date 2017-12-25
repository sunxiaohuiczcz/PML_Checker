#include<stdio.h>
#include<stdlib.h>
int length;
struct Example *creat(void)//返回一个结构体指针函数
{
    struct Example *head;
    struct Example *p1, *p2;
    length = 0;
    p1 = p2 = (struct Example *)malloc(LEN);//同时为p1 p2 开辟内存
    printf("Plseae input the num and class:\n");
    scanf_s("%d,%d", &p1->num, &p1->class);//输 入结构体成员数据
    head = NULL;//防止出现野指针
    while (p1->num != 0)//当输入num不为0时 一直输入不停止
    {
        ++length;
        if (length == 1)head = p1;
        else p2->next = p1;
        p2 = p1;
        p1 = (struct Example *)malloc(LEN);//继续开辟下一个数据域和指针域
        scanf_s("%d,%d", &p1->num, &p1->class);
    }
    p2->next = NULL;//最后一个指针域
    return (head);
}
void main()//思路在于取结构体的指针 然后取得成员变量具体数值
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