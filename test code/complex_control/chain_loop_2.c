/*20171108*/
/*memory leak in chain_loop(2)*/
#include<stdio.h>
void f()
{
	int m = 10; 
	int n = 5;
	int *p;
	while(m > 0){
		p = (int*)malloc(sizeof(int)*20);
		*p = 5;
		m--;
	}
	while(n > 0){
		free(p);
		n--;
	}
}