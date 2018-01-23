/*20171108*/
/*memory leak in branch(1)*/
#include<stdio.h>
void f(int x)
{
	int *p;
	p = (int*)malloc(sizeof(int)*20);
	*p = 3;	
	if(x > 4)
		free(p);
}