#include<stdio.h>
#include<stdlib.h>
int length;
struct Example *creat(void)//����һ���ṹ��ָ�뺯��
{
    struct Example *head;
    struct Example *p1, *p2;
    length = 0;
    p1 = p2 = (struct Example *)malloc(LEN);//ͬʱΪp1 p2 �����ڴ�
    printf("Plseae input the num and class:\n");
    scanf_s("%d,%d", &p1->num, &p1->class);//�� ��ṹ���Ա����
    head = NULL;//��ֹ����Ұָ��
    while (p1->num != 0)//������num��Ϊ0ʱ һֱ���벻ֹͣ
    {
        ++length;
        if (length == 1)head = p1;
        else p2->next = p1;
        p2 = p1;
        p1 = (struct Example *)malloc(LEN);//����������һ���������ָ����
        scanf_s("%d,%d", &p1->num, &p1->class);
    }
    p2->next = NULL;//���һ��ָ����
    return (head);
}
void main()//˼·����ȡ�ṹ���ָ�� Ȼ��ȡ�ó�Ա����������ֵ
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