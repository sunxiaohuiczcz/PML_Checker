#include<stdio.h>
#include<stdlib.h>

void main()
{
    int *p[10];
    printf("%d\n",sizeof(p) );//ÊÇ40
    for (int i = 0; i < 10; ++i)
    {
        p[i] = malloc(sizeof(int)*i);
    }
    for (i = 0; i < 10; ++i)
    {
        free(p[i]);
    }
   // free(p);
}