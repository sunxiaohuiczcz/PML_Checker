/*20171108*/
/*memory leak in chain_loop(1)*/
#include<stdio.h>
void f()
{
	int m = 10;
	int *p;
	while(m > 4){
	
		p = (int*)malloc(sizeof(int)*20);
		*p = 4;
		m--;
	}
	while(m > 0){
		free(p);
		m--;
	}
}