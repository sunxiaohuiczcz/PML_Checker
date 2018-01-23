/*20171108*/
/*memory leak in array_struct(2)*/
#include <stdio.h>
#include <string.h>
struct emp {
    char name[10];
    float salary;
};
int main() {
    struct emp *array_emp;
 
    array_emp=malloc(1000000*sizeof(struct emp));
    if (NULL==array_emp) {
        printf("Can not malloc 1000000 emp!\n");
        return 1;
    }
    strcpy(array_emp[999999].name,"123456789");
    array_emp[999999].salary=50000.0f;
    //free(array_emp);
    return 0;
}