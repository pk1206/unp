#include <stdio.h>
#include <strings.h>

int main()
{
    char str1[10] = "test str";
    char str2[10] = "teststr";
    int ret = 0;

    ret = bcmp(str1, str2, 4);
    printf("ret1 = %d\n", ret); /* 输出 0 */

    ret = bcmp(str1, str2, 5);
    printf("ret2 = %d\n", ret); /* 输出非 0 */
    return 0;
}