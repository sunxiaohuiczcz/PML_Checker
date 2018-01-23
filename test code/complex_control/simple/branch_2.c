/*20171108*/
/*memory leak in branch(2)*/
#include<stdio.h>
void f(int x)
{
	int *p;	
	if(x > 4)
	{
		p = (int*)malloc(sizeof(int)*20);
		*p = 2;
	}
	free(p);
}