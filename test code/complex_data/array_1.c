/*20171108*/
/*memory leak in array(1)*/
#include<stdio.h>
void main()
{
	int (*p)[10];
	p = malloc(sizeof(int*)*2);
	printf("%d\n", sizeof(p));
	//free(p);
}