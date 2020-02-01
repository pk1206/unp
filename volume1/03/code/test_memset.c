#include <stdio.h>
#include <string.h>

int main()
{
    char name[10] = "pk1206";
    printf("name = %s\n", name); /* 输出 "name = pk1206" */
    memset((void*)name, 0, 5);
    printf("name = %s\n", name); /* 输出 "name = " */
    return 0;
}