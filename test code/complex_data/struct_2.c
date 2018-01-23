/*20171108*/
/*memory leak in struct(2)*/
#include <stdio.h>
#include <string.h>

struct student
{
char *name;
int score;
}stu,*psut;

void main()
{
stu.name = (char *)malloc(sizeof(char));  
strcpy(stu.name,"Jimy");
stu.score = 90;
printf("%s\n",stu.name);
}