#include <stdio.h>
#include <arpa/inet.h>
#include <netinet/in.h>

int main()
{
    char ip_addr[INET_ADDRSTRLEN]   = {0};
    char ip_addr6[INET6_ADDRSTRLEN] = {0};
    struct in_addr  addr  = {0};
    struct in6_addr addr6 = {0};

    inet_pton(AF_INET, "192.168.3.100", (void*)&addr);
    inet_ntop(AF_INET, (void*)&addr, ip_addr, INET_ADDRSTRLEN);
    printf("ip_addr = %s\n", ip_addr); /* 输出 "ip_addr = 192.168.3.100" */

    inet_pton(AF_INET6, "fe80::4d8d:78de:fd9:b98", (void*)&addr6);
    inet_ntop(AF_INET6, (void*)&addr6, ip_addr6, INET6_ADDRSTRLEN);
    printf("ip_addr6 = %s\n", ip_addr6); /* 输出 "ip_addr6 = fe80::4d8d:78de:fd9:b98" */
    return 0;
}