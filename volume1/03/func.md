# 第03章函数表

[ref_top]: 第03章函数表 "回顶部"

<table>
    <tr>
        <th>类别</th>
        <th>函数</th>
        <th>头文件</th>
    </tr>
    <tr>
        <td rowspan="4">字节排序函数</td>
        <td>
            uint16_t 
            <a href="#func_htons" title="16位，主机字节序 -> 网络字节序">
                <b>htons</b>
            </a>
            (uint16_t <b>host16bitvalue</b>);
        </td>
        <td rowspan="4">netined/in.h</td>
    </tr>
    <tr>
        <td>
            uint32_t
            <a href="#func_htonl" title="32位，主机字节序 -> 网络字节序">
                <b>htonl</b>
            </a>
            (uint32_t <b>host32bitvalue</b>);
        </td>
    </tr>
    <tr>
        <td>
            uint16_t 
            <a href="#func_ntohs" title="16位，网络字节序 -> 主机字节序">
                <b>ntohs</b>
            </a>
            (uint16_t <b>net16bitvalue</b>);
        </td>
    </tr>
    <tr>
        <td>
            uint32_t 
            <a href="#func_ntohl" title="32位，网络字节序 -> 主机字节序">
                <b>ntohl</b>
            </a>
            (uint32_t <b>net32bitvalue</b>);
        </td>
    </tr>
    <tr>
        <td rowspan="6">字节操纵函数</td>
        <td> 
            void 
            <a href="#func_bzero" title="Berkeley 字节置0函数">
                <b>bzero</b>
            </a>
            (void *<b>dest</b>, size_t <b>nbytes</b>); 
        </td>
        <td rowspan="3">strings.h</td>
    </tr>
    <tr>
        <td> 
            void 
            <a href="#func_bcopy" title="Berkeley 字节复制函数">
                <b>bcopy</b> 
            </a>
            (const void *<b>src</b>, void *<b>dest</b>, size_t <b>nbytes</b>);
        </td>
    </tr>
    <tr>
        <td> 
            int 
            <a href="#func_bcmp" title="Berkeley 字节比较函数">
                <b>bcmp</b> 
            </a>
            (const void *<b>ptr1</b>, const void *<b>ptr2</b>, size_t <b>nbytes</b>);
        </td>
    </tr>
    <tr>
        <td>
            void *
            <a href="#func_memset" title="ANSI C 字节赋值函数">
                <b>memset</b>
            </a>
            (void *<b>dest</b>, int <b>c</b>, size_t <b>len</b>);
        </td>
        <td rowspan="3">string.h</td>
    </tr>
    <tr>
        <td>
            void *
            <a href="#func_memcpy" title="ANSI C 字节复制函数">
                <b>memcpy</b>
            </a>
            (void *<b>dest</b>, const void *<b>src</b>, size_t <b>nbytes</b>);
        </td>
    </tr>
    <tr>
        <td>
            int 
            <a href="#func_memcmp" title="ANSI C 字节比较函数">
                <b>memcmp</b>
            </a>
            (const void *<b>ptr1</b>, const void *<b>ptr2</b>, size_t <b>nbytes</b>);
        </td>
    </tr>
    <tr>
        <td rowspan="5">地址转换函数</td>
        <td>
            int 
            <a href="#func_inet_aton" title="将点分十进制地址转换为32位网络字节序IPv4地址">
                <b>inet_aton</b>
            </a>
            (const char *<b>strptr</b>,
            <a href=struct.md#struct_in_addr title="IPv4套接字地址">
                struct in_addr 
            </a>
            *<b>addrptr</b>);
        </td>
        <td rowspan="5">arpa/inet.h</td>
    </tr>
    <tr>
        <td>
            <abbr title="32位无符号整数">in_addr_t</abbr>
            <a href="#func_inet_addr" title="此函数已废弃。将点分十进制地址转换为32位网络字节序IPv4地址。">
                <b>inet_addr</b>
            </a>
            (const char *<b>strptr</b>);
        </td>
    </tr>
    <tr>
        <td>
            char *
            <a href="#func_inet_ntoa" title="将32位网络字节序IPv4地址转换为点分十进制地址。">
                <b>inet_ntoa</b>
            </a>
            (
            <a href=struct.md#struct_in_addr title="IPv4套接字地址">
                struct in_addr
            </a>
            <b>inaddr</b>);
        </td>
    </tr>
    <tr>
        <td>
            int 
            <a href="#func_inet_pton" title="将表达格式的IP地址转化为数值格式的IP地址">
                <b>inet_pton</b>
            </a>
            (int <b>family</b>, const char *<b>strptr</b>, void *<b>addrptr</b>);
        </td>
    </tr>
    <tr>
        <td>
            const char *
            <a href="#func_inet_ntop" title="将数值格式的IP地址转化为表达格式的IP地址">
                <b>inet_ntop</b>
            </a>
            (int <b>family</b>, const void *<b>addrptr</b>, char *<b>strptr</b>, size_t <b>len</b>);
        </td>
    </tr>
    <tr>
        <td colspan="3" align=center>
            以下函数是 UNP 定义的函数，非标准系统函数。
        </td>
    </tr>
    <tr>
        <td>地址转换函数</td>
        <td>
            char *
            <a href="#func_sock_ntop" title="地址转换函数">
                <b>sock_ntop</b>
            </a>
            (const
            <a href="struct.md#struct_sockaddr" title="通用套接字地址结构">
                struct sockaddr
            </a>
            *<b>sockaddr</b>, <abbr title="一般为 uint32_t">socklen_t</abbr> <b>addrlen</b>);
        </td>
        <td rowspan="12">unp.h</td>
    </tr>
    <tr>
        <td>待确定</td>
        <td>
            int 
            <a href="#func_sock_bind_wild" title="待确定">
                <b>sock_bind_wild</b>
            </a>
            (int <b>sockfd</b>, int <b>family</b>);
        </td>
    </tr>
    <tr>
        <td>地址比较函数</td>
        <td>
            int
            <a href="#func_sock_cmp_addr" title="地址比较函数">
                <b>sock_cmp_addr</b>
            </a>
            (const
            <a href="struct.md#struct_sockaddr" title="通用套接字地址结构">
                struct sockaddr
            </a>
            *<b>sockaddr1</b>, const
            <a href="struct.md#struct_sockaddr" title="通用套接字地址结构">
                struct sockaddr
            </a>
            *<b>sockaddr2</b>,
            <abbr title="通常为uint32_t">socklen_t</abbr>
            <b>addrlen</b>);
        </td>
    </tr>
    <tr>
        <td>端口比较函数</td>
        <td>
            int
            <a href="#func_sock_cmp_port" title="端口比较函数">
                <b>sock_cmp_port</b>
            </a>
            (const
            <a href="struct.md#struct_sockaddr" title="通用套接字地址结构">
                struct sockaddr
            </a>
            *<b>sockaddr1</b>, const
            <a href="struct.md#struct_sockaddr" title="通用套接字地址结构">
                struct sockaddr
            </a>
            *<b>sockaddr2</b>,
            <abbr title="通常为uint32_t">socklen_t</abbr>
            <b>addrlen</b>);
        </td>
    </tr>
    <tr>
        <td>端口获取函数</td>
        <td>
            int 
            <a href="func_sock_get_port" title="端口获取函数">
                <b>sock_get_port</b>
            </a>
            (const
            <a href="struct.md#struct_sockaddr" title="通用套接字地址结构">
                struct sockaddr
            </a>
            *<b>sockaddr</b>,
            <abbr title="通常为uint32_t">socklen_t</abbr>
            <b>addrlen</b>);
        </td>
    </tr>
    <tr>
        <td>待确定</td>
        <td>
            char *
            <a href="#func_sock_ntop_host" title="待确定">
                <b>sock_ntop_host</b>
            </a>
            (const
            <a href="struct.md#struct_sockaddr" title="通用套接字地址结构">
                struct sockaddr
            </a>
            *<b>sockaddr</b>,
            <abbr title="通常为uint32_t">socklen_t</abbr>
            <b>addrlen</b>);
        </td>
    </tr>
    <tr>
        <td>设置地址</td>
        <td>
            void
            <a pref="#func_sock_set_addr" title="设置地址">
                <b>sock_set_addr</b>
            </a>
            (const 
            <a href="struct.md#struct_sockaddr" title="通用套接字地址结构">
                struct sockaddr
            </a>
            *<b>sockaddr</b>,
            <abbr title="通常为uint32_t">socklen_t</abbr>
            <b>addrlen</b>, void *<b>ptr</b>)
        </td>
    </tr>
    <tr>
        <td>设置端口</td>
        <td>
            void
            <a pref="#func_sock_set_port" title="设置端口">
                <b>sock_set_port</b>
            </a>
            (const
            <a href="struct.md#struct_sockaddr" title="通用套接字地址结构">
                struct sockaddr
            </a>
            *<b>sockaddr</b>,
            <abbr title="通常为uint32_t">socklen_t</abbr> <b>addrlen</b>, int <b>port</b>)
        </td>
    </tr>
    <tr>
        <td>待确定</td>
        <td>
            void 
            <a pref="#func_sock_set_wild" tilte="待确定">
                <b>sock_set_wild</b>
            </a>
            (
            <a href="struct.md#struct_sockaddr" title="通用套接字地址结构">
                struct sockaddr
            </a>
            *<b>sockaddr</b>,
            <abbr title="通常为 uint32_t">socklen_t</abbr> <b>addrlen</b>);
        </td>
    </tr>
    <tr>
        <td>读n字节</td>
        <td>
            <abbr title="带符号的size_t">ssize_t</abbr>
            <a href="#func_readn" title="读n字节">
                <b>readn</b>
            </a>
            (int <b>fd</b>, void *<b>buff</b>, size_t <b>nbytes</b>);
        </td>
    </tr>
    <tr>
        <td>写n字节</td>
        <td>
            <abbr title="带符号的size_t">ssize_t</abbr>
            <a href="#func_writen" title="写n字节">
                <b>writen</b>
            </a>
            (int <b>fd</b>, const void *<b>buff</b>, size_t <b>nbytes</b>);
        </td>
    </tr>
    <tr>
        <td>读文本行</td>
        <td>
            <abbr title="带符号的size_t">ssize_t</abbr>
            <a href="#func_readline" title="读文本行">
                <b>readline</b>
            </a>
            (int <b>fd</b>, void *<b>buff</b>, size_t <b>maxlen</b>);
        </td>
    </tr>
</table>


<h2 id=byte_order_function>字节排序函数</h2>

<h3 id=func_htons>uint16_t htons(uint16_t host16bitvalue);</h3>

```c
头文件：netinet/in.h
功能：将16位无符号整数由主机字节序转换为网络字节序。
形参说明：
        host16bitvalue：16位主机字节序整数。
返回值：16位网络字节序整数。
注：h：host n：network s：short
示例代码：
    sockaddr_in addr = {0};
    addr.sin_port = htons(21);
```
[回顶部](#第03章函数表 "回顶部")

<h3 id=func_htonl>uint32_t htonl(uint32_t host32bitvalue);</h3>

```c
头文件：netinet/in.h
功能：将32位无符号整数由主机字节序转换为网络字节序。
形参说明：
        host32bitvalue：32位主机字节序整数。
返回值：32位网络字节序整数。
注意：在64位机器中，尽管长整数占用64位，htonl()函数操作的仍然是32位的值。
注：h：host n：network l：long
示例代码：
    略
```
[回顶部](#第03章函数表 "回顶部")

<h3 id=func_ntohs>uint16_t ntohs(uint16_t net16bitvalue);</h3>

```c
头文件：netinet/in.h
功能：将16位无符号整数由网络字节序转换为主机字节序。
形参说明：
        net16bitvalue：16位网络字节序整数。
返回值：16位主机字节序整数。
注：h：host n：network s：short
示例代码：
    略
```
[回顶部](#第03章函数表 "回顶部")

<h3 id=func_ntohl>uint32_t ntohl(uint32_t net32bitvalue);</h3>

```c
头文件：netinet/in.h
功能：将32位无符号整数由网络字节序转换为主机字节序。
形参说明：
        net32bitvalue：32位网络字节序整数。
返回值：32位主机字节序整数。
注意：在64位机器中，尽管长整数占用64位，ntohl()函数操作的仍然是32位的值。
注：h：host n：network l：long
示例代码：
    略
```
[回顶部](#第03章函数表 "回顶部")

<h2 id=byte_function>字节操纵函数</h2>

<h3 id=func_bzero>void bzero(void *dest, size_t nbytes);</h3>

```c
头文件：strings.h
功能：把目标字节串中指定数目的字节置为0。
形参说明：
        dest：目标字节串的起始地址。
        nbytes：目标字节串的字节数。
返回值：无。
示例代码：
    char str[10];
    bzero(str, 10);
```
[回顶部](#第03章函数表 "回顶部")

<h3 id=func_bcopy>void bcopy(const void *src, void *dest, size_t nbytes);</h3>

```c
头文件：strings.h
功能：将指定数目的字节从源字节串复制到目标字节串。
形参说明：
        src：源字节串起始地址。
        dest：目标字节串起始地址。
        nbytes：需要复制的字节数。
返回值：无。
注意：与 memcpy() 相比，两个指针参数的顺序是相反的。
示例代码：
    char src[10]  = "test str";
    char dest[10];
    bcopy(src, dest, 4);
    printf("dest = %s\n", dest); /* 输出 test */
```
[回顶部](#第03章函数表 "回顶部")

<h3 id=func_bcmp>int bcmp(const void *ptr1, const void *ptr2, size_t nbytes);</h3>

```c
头文件：strings.h
功能：比较两个任意的字节串。
形参说明：
        ptr1：字节串1。
        ptr2：字节串2。
返回值：若两个字节串相同则返回0，否则返回值为非0。
示例代码：
    char str1[10] = "test str";
    char str2[10] = "teststr";
    int ret = 0;

    ret = bcmp(str1, str2, 4);
    printf("ret1 = %d\n", ret); /* 输出 0 */

    ret = bcmp(str1, str2, 5);
    printf("ret2 = %d\n", ret); /* 输出非 0 */
```
[回顶部](#第03章函数表 "回顶部")

<h3 id=func_memset>void *memset(void *dest, int c, size_t len);</h3>

```c
头文件：string.h
功能：把目标字节串指定数目的字节置为值c。
形参说明：
        dest：目标字节串的起始地址。
        c：目标值。
        len：字节数。
返回值：dest。
示例代码：
    char name[10] = "pk1206";
    printf("name = %s\n", name); /* 输出 "name = pk1206" */
    memset((void*)name, 0, 5);
    printf("name = %s\n", name); /* 输出 "name = " */
```
[回顶部](#第03章函数表 "回顶部")

<h3 id=func_memcpy>void *memcpy(void *dest, const void *src, size_t nbytes);</h3>

```c
头文件：string.h
功能：将指定数目的字节从源字节串复制到目标字节串。
注意：与bcopy()相比，两个指针参数的顺序是相反的。
形参说明：
        dest：目标字节串起始地址。
        src：源字节串起始地址。
        nbytes：需要复制的字节数。
返回值：dest。
备注：
当源字节串与目标字节串重叠时，bcopy()能够正确处理，但是memcpy()的操作结果却不可知。
这种情形下必须改用ANSI C的memmove()函数。
示例代码：
    char src[10]  = "test str";
    char dest[10];
    memcpy(dest, src, 10);
    printf("dest = %s\n", dest); /* 输出 "dest = test str" */
```
[回顶部](#第03章函数表 "回顶部")

<h3 id=func_memcmp>int memcmp(const void *ptr1, const void *ptr2, size_t nbytes);</h3>

```c
头文件：string.h
功能：比较两个任意的字节串。
形参说明：
        ptr1：字节串1。
        ptr2：字节串2。
        nbytes：需要比较的字节数目。
返回值：若相同则返回0，否则返回一个非0值，是大于0还是小于0则取决于第一个不等的字节。
示例代码：
    char str1[10] = "test str";
    char str2[10] = "teststr";
    printf("ret = %d\n", memcmp(str1, str2, 4)); /* 返回值 =0 */
    printf("ret = %d\n", memcmp(str1, str2, 5)); /* 返回值 <0 */
```
[回顶部](#第03章函数表 "回顶部")

<h2 id=addr_transf_function>地址转换函数</h2>

<h3 id=func_inet_aton>int inet_aton(const char *strptr, 
    <a href=struct.md#struct_in_addr title="IPv4套接字地址">
        struct in_addr
    </a>
     *addrptr);
</h3>

```c
头文件：arpa/inet.h
功能：将 strptr 所指C字符串转换成一个32位的网络字节序二进制值，并通过addrptr来存储。
形参说明：
        strptr：表达式形式的IP地址（点分十进制）。
        addrptr：32位的IPv4地址。
返回值：若字符串有效则为1，否则为0。
示例代码：
    struct in_addr addr = {0};
    inet_aton("192.168.3.100", &addr);
    printf("s_addr = %#x\n", addr.s_addr); /* 输出 "s_addr=0x6403a8c0" */
```
[回顶部](#第03章函数表 "回顶部")

<h3 id=func_inet_addr>
    <del>
    <abbr title="32位无符号整数">in_addr_t</abbr>
    inet_addr(const char *strptr);
    </del>
</h3>

```c
头文件：arpa/inet.h
功能：此函数已废弃。将 strptr 所指C字符串转换成一个32位的网络字节序二进制值。
形参说明：
        strptr：表达式形式的IP地址（点分十进制）。
返回值：若字符串有效则为32位二进制网络字节序的IPv4地址，否则为INADDR_NONE。
注意：INADDR_NONE通常是一个32位均为1的值，所以此函数不能处理 255.255.255.255。
示例：
    struct in_addr addr = {0};
    addr.s_addr = inet_addr("192.168.3.100");
    printf("s_addr = %#x\n", addr.s_addr); /* 输出 "s_addr=0x6403a8c0" */
```
[回顶部](#第03章函数表 "回顶部")

<h3 id=func_inet_ntoa>
    char *inet_ntoa(
    <a pref=struct.md#struct_in_addr title="IPv4套接字地址">struct in_addr</a>
    inaddr);
</h3>

```c
头文件：arpa/inet.h
功能：将一个32位的网络字节序二进制IPv4地址转换成相应的点分十进制数串。
形参说明：
        in_addr：32位的网络字节序二进制IPv4地址。
返回值：指向一个点分十进制数串的指针。
注意：由该函数的返回值所指向的字符串驻留在静态内存中。这意味着该函数是不可重入的。
示例代码：
    struct in_addr addr = {0};
    inet_aton("192.168.1.100", &addr);
    char *ip = inet_ntoa(addr);

    inet_aton("192.168.100.1", &addr);
    inet_ntoa(addr);            /* 没有对指针 ip 重新赋值 */
    printf("ip = %s\n", ip);    /* 输出 "ip = 192.168.100.1" */
```
[回顶部](#第03章函数表 "回顶部")

<h3 id=func_inet_pton>int inet_pton(int family, const char *strptr, void *addrptr);</h3>

```c
头文件：arpa/inet.h
功能：与 inet_aton() 类似，将表达式格式的地址，转换为数值格式的地址。兼容IPv4和IPv6。
形参说明：
        family：取值可以是 AF_INET 或 AF_INET6。
        strptr：存储表达式格式地址的字符串。
        addrptr：返回数值格式的IP地址。转换为 struct in_addr 或 struct in6_addr。
返回值：
        1：成功。
        0：输入不是有效的表达式格式。
        -1：出错。
示例代码：
    struct in_addr  addr  = {0};
    struct in6_addr addr6 = {0};

    inet_pton(AF_INET, "192.168.3.100", (void*)&addr);
    printf("s_addr = %#x\n", addr.s_addr); /* 输出 "s_addr = 0x6403a8c0" */

    inet_pton(AF_INET6, "fe80::4d8d:78de:fd9:b98", (void*)&addr6);
    printf("s6_addr = 0x");
    for (int i=0; i<16; i++)
        printf("%02x", addr6.s6_addr[i]);
    printf("\n");  /* 输出 "s6_addr = 0xfe800000000000004d8d78de0fd90b98" */
```
[回顶部](#第03章函数表 "回顶部")

<h3 id=func_inet_ntop>const char *inet_ntop(int family, const void *addrptr, char *strptr, size_t len);</h3>

```c
头文件：arpa/inet.h
功能：与 inet_ntoa() 类似，将数值格式的地址，转换为表达式格式的地址。兼容IPv4和IPv6。
形参说明：
        family：取值可以是 AF_INET 或 AF_INET6。
        addrptr：存储数值格式地址的结构体，struct in_addr 或 struct in6_addr。
        strptr：返回表达式格式的地址。
        len：strptr的长度，以避免该函数溢出其调用者的缓冲区。
             为了有助于指定这个大小，在 netinet/in.h 有以下定义。
             #define INET_ADDRSTRLEN   16  /* for IPv4 dotted-decimal */
             #define INET6_ADDRSTRLEN  46  /* for IPv6 hex string */
             若 len 不足以容纳表达式结果（包括结尾的空字符），那么返回一个空指针，errno设置为ENOSPEC。
返回值：若成功则为指向结果的指针，若出错则为NULL。
示例代码：
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
```
[回顶部](#第03章函数表 "回顶部")

<h3 id=func_sock_ntop>
    char *sock_ntop (const
    <a href="struct.md#struct_sockaddr" title="通用套接字地址结构">
        struct sockaddr
    </a>
    *sockaddr, <abbr title="一般为 uint32_t">socklen_t</abbr> addrlen);
</h3>

```c
头文件：unp.h
功能：将数值格式的地址，转换为表达式格式的地址。
形参说明：
返回值：若成功则为非空指针，若出错则为NULL。
注：UNP定义的函数，非标准系统函数。
实现：
char *sock_ntop(const struct sockaddr *sa, socklen_t salen)
{
    char        portstr[8];
    static char str[128];       /* Unix domain is largest */

    switch (sa->sa_family)
    {
    case AF_INET: {
        struct sockaddr_in  *sin = (struct sockaddr_in *) sa;

        if (inet_ntop(AF_INET, &sin->sin_addr, str, sizeof(str)) == NULL)
            return(NULL);
        if (ntohs(sin->sin_port) != 0) {
            snprintf(portstr, sizeof(portstr), ":%d", ntohs(sin->sin_port));
            strcat(str, portstr);
        }
        return(str);
    }

#ifdef  IPV6
    case AF_INET6: {
        struct sockaddr_in6 *sin6 = (struct sockaddr_in6 *) sa;

        str[0] = '[';
        if (inet_ntop(AF_INET6, &sin6->sin6_addr, str + 1, sizeof(str) - 1) == NULL)
            return(NULL);
        if (ntohs(sin6->sin6_port) != 0) {
            snprintf(portstr, sizeof(portstr), "]:%d", ntohs(sin6->sin6_port));
            strcat(str, portstr);
            return(str);
        }
        return (str + 1);
    }
#endif

#ifdef  AF_UNIX
    case AF_UNIX: {
        struct sockaddr_un  *unp = (struct sockaddr_un *) sa;

        /* OK to have no pathname bound to the socket: happens on
            every connect() unless client calls bind() first. */
        if (unp->sun_path[0] == 0)
            strcpy(str, "(no pathname bound)");
        else
            snprintf(str, sizeof(str), "%s", unp->sun_path);
        return(str);
    }
#endif

#ifdef  HAVE_SOCKADDR_DL_STRUCT
    case AF_LINK: {
        struct sockaddr_dl  *sdl = (struct sockaddr_dl *) sa;

        if (sdl->sdl_nlen > 0)
            snprintf(str, sizeof(str), "%*s (index %d)",
                     sdl->sdl_nlen, &sdl->sdl_data[0], sdl->sdl_index);
        else
            snprintf(str, sizeof(str), "AF_LINK, index=%d", sdl->sdl_index);
        return(str);
    }
#endif
    default:
        snprintf(str, sizeof(str), "sock_ntop: unknown AF_xxx: %d, len %d",
                 sa->sa_family, salen);
        return(str);
    }
    return (NULL);
}
```
[回顶部](#第03章函数表 "回顶部")

<h3 id=func_sock_bind_wild>
    int sock_bind_wild (int sockfd, int family);
</h3>

```c
头文件：unp.h
功能：
形参说明：
返回值：若成功则为0，若出错则为-1。
注：UNP定义的函数，非标准系统函数。
实现：
int sock_bind_wild(int sockfd, int family)
{
    socklen_t   len;

    switch (family) {
    case AF_INET: {
        struct sockaddr_in  sin;

        bzero(&sin, sizeof(sin));
        sin.sin_family = AF_INET;
        sin.sin_addr.s_addr = htonl(INADDR_ANY);
        sin.sin_port = htons(0);    /* bind ephemeral port */

        if (bind(sockfd, (SA *) &sin, sizeof(sin)) < 0)
            return(-1);
        len = sizeof(sin);
        if (getsockname(sockfd, (SA *) &sin, &len) < 0)
            return(-1);
        return(sin.sin_port);
    }

#ifdef  IPV6
    case AF_INET6: {
        struct sockaddr_in6 sin6;

        bzero(&sin6, sizeof(sin6));
        sin6.sin6_family = AF_INET6;
        sin6.sin6_addr = in6addr_any;
        sin6.sin6_port = htons(0);  /* bind ephemeral port */

        if (bind(sockfd, (SA *) &sin6, sizeof(sin6)) < 0)
            return(-1);
        len = sizeof(sin6);
        if (getsockname(sockfd, (SA *) &sin6, &len) < 0)
            return(-1);
        return(sin6.sin6_port);
    }
#endif
    }
    return(-1);
}

```
[回顶部](#第03章函数表 "回顶部")

<h3 id=func_sock_cmp_addr>
    int sock_cmp_addr (const
    <a href="struct.md#struct_sockaddr" title="通用套接字地址结构">
        struct sockaddr
    </a>
    *sockaddr1, const
    <a href="struct.md#struct_sockaddr" title="通用套接字地址结构">
        struct sockaddr
    </a>
    *sockaddr2,
    <abbr title="通常为uint32_t">socklen_t</abbr>
    addrlen);
</h3>

```c
头文件：unp.h
功能：
形参说明：
返回值：若地址为同一协议族并相同则为0，否则为非0。
注：UNP定义的函数，非标准系统函数。
实现：
int sock_cmp_addr(const struct sockaddr *sa1, const struct sockaddr *sa2,
             socklen_t salen)
{
    if (sa1->sa_family != sa2->sa_family)
        return(-1);

    switch (sa1->sa_family) {
    case AF_INET: {
        return(memcmp( &((struct sockaddr_in *) sa1)->sin_addr,
                       &((struct sockaddr_in *) sa2)->sin_addr,
                       sizeof(struct in_addr)));
    }

#ifdef  IPV6
    case AF_INET6: {
        return(memcmp( &((struct sockaddr_in6 *) sa1)->sin6_addr,
                       &((struct sockaddr_in6 *) sa2)->sin6_addr,
                       sizeof(struct in6_addr)));
    }
#endif

#ifdef  AF_UNIX
    case AF_UNIX: {
        return(strcmp( ((struct sockaddr_un *) sa1)->sun_path,
                       ((struct sockaddr_un *) sa2)->sun_path));
    }
#endif

#ifdef  HAVE_SOCKADDR_DL_STRUCT
    case AF_LINK: {
        return(-1);     /* no idea what to compare here ? */
    }
#endif
    }
    return (-1);
}
```
[回顶部](#第03章函数表 "回顶部")

<h3 id=func_sock_cmp_port>
    int sock_cmp_port(const
    <a href="struct.md#struct_sockaddr" title="通用套接字地址结构">
        struct sockaddr
    </a>
    *sockaddr1, const
    <a href="struct.md#struct_sockaddr" title="通用套接字地址结构">
        struct sockaddr
    </a>
    *sockaddr2,
    <abbr title="通常为uint32_t">socklen_t</abbr>
    addrlen);
</h3>

```c
头文件：unp.h
功能：
形参说明：
返回值：若地址为同一协议族且端口相同则为0，否则为非0。
注：UNP定义的函数，非标准系统函数。
实现：
int sock_cmp_port(const struct sockaddr *sa1, const struct sockaddr *sa2,
             socklen_t salen)
{
    if (sa1->sa_family != sa2->sa_family)
        return(-1);

    switch (sa1->sa_family) {
    case AF_INET: {
        return( ((struct sockaddr_in *) sa1)->sin_port ==
                ((struct sockaddr_in *) sa2)->sin_port);
    }

#ifdef  IPV6
    case AF_INET6: {
        return( ((struct sockaddr_in6 *) sa1)->sin6_port ==
                ((struct sockaddr_in6 *) sa2)->sin6_port);
    }
#endif

    }
    return (-1);
}
```
[回顶部](#第03章函数表 "回顶部")

<h3 id=func_sock_get_port>
    int sock_get_port(const
    <a href="struct.md#struct_sockaddr" title="通用套接字地址结构">
        struct sockaddr
    </a>
    *sockaddr,
    <abbr title="通常为uint32_t">socklen_t</abbr>
    addrlen);
</h3>

```c
头文件：unp.h
功能：
形参说明：
返回值：若为IPv4或IPv6地址则为飞负端口号，否则为-1。
注：UNP定义的函数，非标准系统函数。
实现：
int
sock_get_port(const struct sockaddr *sa, socklen_t salen)
{
    switch (sa->sa_family) {
    case AF_INET: {
        struct sockaddr_in  *sin = (struct sockaddr_in *) sa;

        return(sin->sin_port);
    }

#ifdef  IPV6
    case AF_INET6: {
        struct sockaddr_in6 *sin6 = (struct sockaddr_in6 *) sa;

        return(sin6->sin6_port);
    }
#endif
    }

    return(-1);     /* ??? */
}
```
[回顶部](#第03章函数表 "回顶部")

<h3 id=func_sock_ntop_host>
    char * sock_ntop_host(const
    <a href="struct.md#struct_sockaddr" title="通用套接字地址结构">
        struct sockaddr
    </a>
    *sockaddr,
    <abbr title="通常为uint32_t">socklen_t</abbr>
    addrlen);
</h3>

```c
头文件：unp.h
功能：
形参说明：
返回值：若成功则为飞空指针，否则为-1。
注：UNP定义的函数，非标准系统函数。
实现：
char *sock_ntop_host(const struct sockaddr *sa, socklen_t salen)
{
    static char str[128];       /* Unix domain is largest */

    switch (sa->sa_family) {
    case AF_INET: {
        struct sockaddr_in  *sin = (struct sockaddr_in *) sa;

        if (inet_ntop(AF_INET, &sin->sin_addr, str, sizeof(str)) == NULL)
            return(NULL);
        return(str);
    }

#ifdef  IPV6
    case AF_INET6: {
        struct sockaddr_in6 *sin6 = (struct sockaddr_in6 *) sa;

        if (inet_ntop(AF_INET6, &sin6->sin6_addr, str, sizeof(str)) == NULL)
            return(NULL);
        return(str);
    }
#endif

#ifdef  AF_UNIX
    case AF_UNIX: {
        struct sockaddr_un  *unp = (struct sockaddr_un *) sa;

        /* OK to have no pathname bound to the socket: happens on
            every connect() unless client calls bind() first. */
        if (unp->sun_path[0] == 0)
            strcpy(str, "(no pathname bound)");
        else
            snprintf(str, sizeof(str), "%s", unp->sun_path);
        return(str);
    }
#endif

#ifdef  HAVE_SOCKADDR_DL_STRUCT
    case AF_LINK: {
        struct sockaddr_dl  *sdl = (struct sockaddr_dl *) sa;

        if (sdl->sdl_nlen > 0)
            snprintf(str, sizeof(str), "%*s",
                     sdl->sdl_nlen, &sdl->sdl_data[0]);
        else
            snprintf(str, sizeof(str), "AF_LINK, index=%d", sdl->sdl_index);
        return(str);
    }
#endif
    default:
        snprintf(str, sizeof(str), "sock_ntop_host: unknown AF_xxx: %d, len %d",
                 sa->sa_family, salen);
        return(str);
    }
    return (NULL);
}
```
[回顶部](#第03章函数表 "回顶部")

<h3 id=func_sock_set_addr>
    void sock_set_addr(const 
    <a href="struct.md#struct_sockaddr" title="通用套接字地址结构">
        struct sockaddr
    </a>
    *sockaddr,
    <abbr title="通常为uint32_t">socklen_t</abbr>
    addrlen, void *ptr)
</h3>

```c
头文件：unp.h
功能：
形参说明：
注：UNP定义的函数，非标准系统函数。
实现：
void sock_set_addr(struct sockaddr *sa, socklen_t salen, const void *addr)
{
    switch (sa->sa_family) {
    case AF_INET: {
        struct sockaddr_in  *sin = (struct sockaddr_in *) sa;

        memcpy(&sin->sin_addr, addr, sizeof(struct in_addr));
        return;
    }

#ifdef  IPV6
    case AF_INET6: {
        struct sockaddr_in6 *sin6 = (struct sockaddr_in6 *) sa;

        memcpy(&sin6->sin6_addr, addr, sizeof(struct in6_addr));
        return;
    }
#endif
    }

    return;
}
```
[回顶部](#第03章函数表 "回顶部")

<h3 id=func_sock_set_port>
    void sock_set_port(const
    <a href="struct.md#struct_sockaddr" title="通用套接字地址结构">
        struct sockaddr
    </a>
    *sockaddr,
    <abbr title="通常为uint32_t">socklen_t</abbr> addrlen, int port)
</h3>

```c
头文件：unp.h
功能：
形参说明：
注：UNP定义的函数，非标准系统函数。
实现：
void sock_set_port(struct sockaddr *sa, socklen_t salen, int port)
{
    switch (sa->sa_family) {
    case AF_INET: {
        struct sockaddr_in  *sin = (struct sockaddr_in *) sa;

        sin->sin_port = port;
        return;
    }

#ifdef  IPV6
    case AF_INET6: {
        struct sockaddr_in6 *sin6 = (struct sockaddr_in6 *) sa;

        sin6->sin6_port = port;
        return;
    }
#endif
    }

    return;
}
```
[回顶部](#第03章函数表 "回顶部")

<h3 id=func_sock_set_wild>
    void sock_set_wild(
    <a href="struct.md#struct_sockaddr" title="通用套接字地址结构">
        struct sockaddr
    </a>
    *sockaddr, <abbr title="通常为 uint32_t">socklen_t</abbr> addrlen);
</h3>

```c
头文件：unp.h
功能：
形参说明：
注：UNP定义的函数，非标准系统函数。
实现：
void sock_set_wild(struct sockaddr *sa, socklen_t salen)
{
    const void  *wildptr;

    switch (sa->sa_family) {
    case AF_INET: {
        static struct in_addr   in4addr_any;

        in4addr_any.s_addr = htonl(INADDR_ANY);
        wildptr = &in4addr_any;
        break;
    }

#ifdef  IPV6
    case AF_INET6: {
        wildptr = &in6addr_any;
        break;
    }
#endif

    default:
        return;
    }
    sock_set_addr(sa, salen, wildptr);
    return;
}
```
[回顶部](#第03章函数表 "回顶部")

<h3 id=func_readn>
    <abbr title="带符号的size_t">ssize_t</abbr>
    readn(int fd, void *buff, size_t nbytes);
</h3>
```c
头文件：unp.h
功能：从一个描述符读n字节。
形参说明：
返回值：
注：UNP定义的函数，非标准系统函数。
实现：
/* Read "n" bytes from a descriptor. */
ssize_t readn(int fd, void *vptr, size_t n)
{
    size_t  nleft;
    ssize_t nread;
    char    *ptr;

    ptr = vptr;
    nleft = n;
    while (nleft > 0) {
        if ( (nread = read(fd, ptr, nleft)) < 0) {
            if (errno == EINTR)
                nread = 0;      /* and call read() again */
            else
                return(-1);
        } else if (nread == 0)
            break;              /* EOF */

        nleft -= nread;
        ptr   += nread;
    }
    return(n - nleft);      /* return >= 0 */
}
```
[回顶部](#第03章函数表 "回顶部")

<h3 id=func_writen>
    <abbr title="带符号的size_t">ssize_t</abbr>
    writen(int fd, const void *buff, size_t nbytes);
</h3>
```c
头文件：unp.h
功能：往一个描述符写n字节。
形参说明：
返回值：
注：UNP定义的函数，非标准系统函数。
实现：
/* Write "n" bytes to a descriptor. */
ssize_t writen(int fd, const void *vptr, size_t n)
{
    size_t      nleft;
    ssize_t     nwritten;
    const char  *ptr;

    ptr = vptr;
    nleft = n;
    while (nleft > 0) {
        if ( (nwritten = write(fd, ptr, nleft)) <= 0) {
            if (nwritten < 0 && errno == EINTR)
                nwritten = 0;       /* and call write() again */
            else
                return(-1);         /* error */
        }

        nleft -= nwritten;
        ptr   += nwritten;
    }
    return(n);
}
```
[回顶部](#第03章函数表 "回顶部")

<h3 id=func_readline>
    <abbr title="带符号的size_t">ssize_t</abbr>
    readline(int fd, void *buff, size_t maxlen);
</h3>
```c
头文件：unp.h
功能：从一个描述符读文本行，一次1个字节。
形参说明：
返回值：
注：UNP定义的函数，非标准系统函数。
实现：
ssize_t readline(int fd, void *vptr, size_t maxlen)
{
    ssize_t n, rc;
    char    c, *ptr;

    ptr = vptr;
    for (n = 1; n < maxlen; n++) {
        if ( (rc = my_read(fd, &c)) == 1) {
            *ptr++ = c;
            if (c == '\n')
                break;  /* newline is stored, like fgets() */
        } else if (rc == 0) {
            *ptr = 0;
            return(n - 1);  /* EOF, n - 1 bytes were read */
        } else
            return(-1);     /* error, errno set by read() */
    }

    *ptr = 0;   /* null terminate like fgets() */
    return(n);
}
```
[回顶部](#第03章函数表 "回顶部")