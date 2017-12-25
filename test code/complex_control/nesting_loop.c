#include<stdio.h>
void f()
{
	int m = 10;
	while(m > 0){
		int *p;
		p = (int*)malloc(sizeof(int)*20);
		*p = 2;
		m--;
		while(m > 5){
			free(p);
			m--;
			}
		
	}
}