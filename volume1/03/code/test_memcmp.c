#include <stdio.h>
#include <string.h>

int main()
{
    char str1[10] = "test str";
    char str2[10] = "teststr";
    printf("ret = %d\n", memcmp(str1, str2, 4)); /* 返回值 =0 */
    printf("ret = %d\n", memcmp(str1, str2, 5)); /* 返回值 <0 */
    return 0;
}