#include<stdio.h>


void main()
{
    int *p[10];
    int x=1;
    printf("%d\n",sizeof(p) );//ÊÇ40
    for (int i = 0; i < 10; ++i)
    {
	if(x>1)
       	 	p[i] = malloc(sizeof(int)*i);
    }
    for (i = 0; i < 10; ++i)
    {
	if(x>2)
       	 	free(p[i]);
    }
}