#include <stdio.h>
#include <arpa/inet.h>

int main()
{
    struct in_addr  addr  = {0};
    struct in6_addr addr6 = {0};

    inet_pton(AF_INET, "192.168.3.100", (void*)&addr);
    printf("s_addr = %#x\n", addr.s_addr); /* 输出 "s_addr = 0x6403a8c0" */

    inet_pton(AF_INET6, "fe80::4d8d:78de:fd9:b98", (void*)&addr6);
    printf("s6_addr = 0x");
    for (int i=0; i<16; i++)
        printf("%02x", addr6.s6_addr[i]);
    printf("\n");  /* 输出 "s6_addr = 0xfe800000000000004d8d78de0fd90b98" */

    return 0;
}