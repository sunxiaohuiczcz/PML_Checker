/*20171108*/
/*memory leak in array(3)*/
#include<stdio.h>
void main()
{
    int *p[10];
    int x=1;
    printf("%d\n",sizeof(p) );
    for (int i = 0; i < 10; ++i)
    {
	if(x>1)
       	 	p[i] = malloc(sizeof(int)*i);
    }
    for (i = 0; i < 10; ++i)
    {
	if(x>2)
       	 	free(p[i]);
    }
}