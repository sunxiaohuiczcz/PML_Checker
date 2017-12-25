#include<stdio.h>
void f(int x)
{
	int *p;
	if(x > 0)
	{
		p = (int*)malloc(sizeof(int)*20);
		*p = 4;	
		if(x > 5)
			free(p);
	}
}