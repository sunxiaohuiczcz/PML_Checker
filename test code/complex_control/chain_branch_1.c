#include<stdio.h>
void f(int x)
{
	int *p;
	if(x > 0)
	{
		p = (int*)malloc(sizeof(int)*20);
		*p = 5;	
	}
	if(x > 4)
		free(p);
}