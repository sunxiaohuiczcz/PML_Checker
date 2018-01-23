/*20171108*/
/*memory leak in chain_branch(2)*/
#include<stdio.h>
void f(int x, int y)
{
	int *p;
	if(x > 0)
	{
		p = (int*)malloc(sizeof(int)*20);
		*p = 5;	
	}
	if(y > 0)
		free(p);
}