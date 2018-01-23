/*20171108*/
/*memory leak in loop(1)*/
#include<stdio.h>
void f()
{
	int m = 10;
	int *p;
	p = (int*)malloc(sizeof(int)*20);
	*p = 3;
	while(m > 0){
		free(p);
		m--;
	}
}