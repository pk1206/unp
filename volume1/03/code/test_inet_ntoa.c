#include <stdio.h>
#include <arpa/inet.h>

int main()
{
	struct in_addr addr = {0};
    inet_aton("192.168.1.100", &addr);
    char *ip = inet_ntoa(addr);

    inet_aton("192.168.100.1", &addr);
    inet_ntoa(addr);            /* 没有对指针 ip 重新赋值 */
    printf("ip = %s\n", ip);    /* 输出 "ip = 192.168.100.1" */
}
