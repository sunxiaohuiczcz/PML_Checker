#include<stdio.h>
void f()
{
	int m = 10;
	int *p;
	while(m > 0){
		p = (int*)malloc(sizeof(int)*20);
		*p = 3;
		m--;
	}
	free(p);
}