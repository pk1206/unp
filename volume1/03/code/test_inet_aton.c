#include <stdio.h>
#include <arpa/inet.h>

int main()
{
    struct in_addr addr = {0};
    inet_aton("192.168.3.100", &addr);
    printf("s_addr = %#x\n", addr.s_addr); /* 输出 "s_addr=0x6403a8c0"*/
    return 0;
}