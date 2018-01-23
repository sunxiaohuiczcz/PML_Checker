/*20171108*/
/*memory leak in array(2)*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *p[10];
    printf("%d\n",sizeof(p) );
    for (int i = 0; i < 10; ++i)
    {
        p[i] = malloc(sizeof(int)*i);
    }
    for (i = 0; i < 10; ++i)
    {
        free(p[i]);
    }
   // free(p);
}