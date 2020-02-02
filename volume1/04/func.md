<h1 id=file_func>
    第04章函数表
</h1>

[返回上一级](notes.md "第04章笔记")
[返回章节目录](../volume1.md "章节目录")

---

<table id=table_func>
    <tr>
        <th>类别</th>
        <th>函数</th>
        <th>头文件</th>
    </tr>
    <tr>
        <td>socket函数</td>
        <td>
            int 
            <a href="#func_socket" title="socket函数">
                <b>socket</b>
            </a>
            (int <b>family</b>, int <b>type</b>, int <b>protocol</b>);
        </td>
        <td rowspan="5">sys/socket.h</td>
    </tr>
    <tr>
        <td>connect函数</td>
        <td>
            int 
            <a href="#func_connect" title="connect函数">
                <b>connect</b>
            </a>
            (int <b>sockfd</b>, const
            <a href="../03/struct.md#struct_sockaddr" title="connect函数">
                struct sockaddr
            </a>
            *<b>servaddr</b>,
            <abbr title="套接字地址结构的长度，通常为uint32_t">
                socklen_t
            </abbr>
            <b>addrlen</b>);
        </td>
    </tr>
    <tr>
        <td>bind函数</td>
        <td>
            int 
            <a href="#func_bind" title="bind函数"><b>bind<b></a>
            (int <b>sockfd</b>, const 
            <a href="../03/struct.md#struct_sockaddr" title="connect函数">
                struct sockaddr
            </a>
             *<b>myaddr</b>, 
            <abbr title="套接字地址结构的长度，通常为uint32_t">
                socklen_t
            </abbr>
            <b>addrlen</b>);
        </td>
    </tr>
    <tr>
        <td>listen函数</td>
        <td>
            int 
            <a href="#func_listen" title="listen函数"><b>listen</b></a>
            (int <b>sockfd</b>, int <b>backlog</b>);
        </td>
    </tr>
    <tr>
        <td>accept函数</td>
        <td>
            int
            <a href="#func_accept" title="accept函数"><b>accept</b></a>
            (int <b>sockfd</b>, 
            <a href="../03/struct.md#struct_sockaddr" title="connect函数">
                struct sockaddr
            </a>
             *<b>cliaddr</b>, 
            <abbr title="套接字地址结构的长度，通常为uint32_t">
                socklen_t
            </abbr>
            *<b>addrlen</b>);
        </td>
    </tr>
    <tr>
        <td>close函数</td>
        <td>
            int 
            <a href="#func_close" title="close函数"><b>close</b></a>
            (int <b>sockfd</b>);
        </td>
        <td>unistd.h</td>
    </tr>
    <tr>
        <td>getsockname函数</td>
        <td>
            int 
            <a href="#func_getsockname" title="getsockname函数"><b>getsockname</b></a>
            (int <b>sockfd</b>,  
            <a href="../03/struct.md#struct_sockaddr" title="通用套接字地址">
                struct sockaddr
            </a>
            *<b>localaddr</b>,
            <abbr title="套接字地址结构的长度，通常为uint32_t">
                socklen_t
            </abbr> *<b>addrlen</b>);
        </td>
        <td rowspan="2">sys/socket.h</td>
    </tr>
    <tr>
        <td>getpeername函数</td>
        <td>
            int 
            <a href="#func_getpeername" title="getpeername函数"><b>getpeername</b></a>
            (int <b>sockfd</b>,  
            <a href="../03/struct.md#struct_sockaddr" title="通用套接字地址">
                struct sockaddr
            </a>
            *<b>peeraddr</b>,
            <abbr title="套接字地址结构的长度，通常为uint32_t">
                socklen_t
            </abbr> *<b>addrlen</b>);
        </td>
    </tr>
</table>


<h3 id=func_socket>
    int socket(int family, int type, int protocol);
</h3>

```c
头文件：sys/socket.h
功能：创建一个套接字描述符，并指定协议族(family)和套接字类型(type)。
形参说明：
    family：指明协议族，也往往被称为协议域。
            AF_INET             Ipv4协议
            AF_INET6            IPv6协议
            AF_LOCAL(AF_UNIX)   Unix域协议（见第15章）
            AF_ROUTE            路由器套接字（见第18章）
            AF_KEY              密钥套接字（见第19章）
    type：指明套接字类型。
            SOCK_STREAM         字节流套接字
            SOCK_DGRAM          数据报套接字
            SOCK_SEQPACKET      有序分组套接字
            SOCK_RAW            原始套接字
    protocol：指明协议类型。如果为0，则根据family和type选择默认值。
            IPPROTO_TCP         TCP传输协议
            IPPROTO_UDP         UDP传输协议
            IPPROTO_SCTP        SCTP传输协议
返回值：若成功则为一个小的非负整数值，与文件描述符类似，称为套接字描述符。
注意：

套接字状态：CLOSED，默认为主动套接字。

并非所有的family和type的组合都是有效的。
下图给出了一些有效的组合和对应的真正协议，空白项是无效组合。
示例代码：
    略。
```

<table id=table_socket_family_type>
    <caption><b>socket函数中family和type参数的组合</b></caption>
    <tr>
        <th></th><th>AF_INET</th><th>AF_INET6</th>
        <th>AF_LOCAL</th><th>AF_ROUTE</th><th>AF_KEY</th>
    </tr>
    <tr>
        <th>SOCK_STREAM</th><th>TCP|SCTP</th><th>TCP|SCTP</th>
        <th>是</th><th></th><th></th>
    </tr>
    <tr>
        <th>SOCK_DGRAM</th><th>UDP</th><th>UDP</th>
        <th>是</th><th></th><th></th>
    </tr>
    <tr>
        <th>SOCK_SEQPACKET</th><th>SCTP</th><th>SCTP</th>
        <th>是</th><th></th><th></th>
    </tr>
    <tr>
        <th>SOCK_RAW</th><th>IPv4</th><th>IPv6</th>
        <th></th><th>是</th><th>是</th>
    </tr>
</table>

[回顶部](#file_func "回顶部")

<h3 id=func_connect>
    int connect(int sockfd, const 
    <a href="../03/struct.md#struct_sockaddr" title="通用套接字地址">
        struct sockaddr
    </a>
    *servaddr, 
    <abbr title="套接字地址结构的长度，通常为uint32_t">
        socklen_t
    </abbr> addrlen);
</h3>

```c
头文件：sys/socket.h
功能：TCP客户用connect函数来建立与TCP服务器的连接。
形参说明：
    sockfd：  socket()函数的返回值。
    servaddr：指向套接字地址结构的指针，必须含有服务器的IP地址和端口号。
    addrlen： 套接字地址结构的长度。
返回值：若成功则为0，若出错则为-1。
       如果是TCP套接字，connect()函数会激发TCP三次握手，并在连接成功或出错后才返回。
可能的出错（errno）：
1、ETIMEDOUT
    原因：TCP客户没有收到SYN分节的响应。
    产生条件：超过规定的时间则返回此错误，客户会多次发送SYN分节。
2、ECONNREFUSED
    原因：对客户SYN的响应是RST。
    产生条件：服务器指定的端口没有进程在监听。客户收到RST后立即返回此错误。
3、EHOSTUNREACH ENETUNREACH
    原因：客户发送的SYN在某个路由器上引发了“目的地不可达”的ICMP错误。
    产生条件：客户会尝试重发SYN，如果在规定时间内没有收到ACK，返回此错误。
若 connect() 失败，则该套接字不再可用，必须关闭。

套接字状态：
    connect()调用：    CLOSED   -> SYN_SENT
    connect()返回成功：SYN_SENT -> ESTABLISHED
    connect()返回出错：SYN_SENT -> CLOSED (调用 close()后才改变？)

注：
客户在调用connect()函数之前，不必调用bind()函数。
内核会确定源IP地址，并选择一个临时端口作为源端口。
```

[回顶部](#file_func "回顶部")

<h3 id=func_bind>
    int bind(int sockfd, const 
    <a href="../03/struct.md#struct_sockaddr" title="通用套接字地址">
        struct sockaddr
    </a>
    *myaddr, 
    <abbr title="套接字地址结构的长度，通常为uint32_t">
        socklen_t
    </abbr> addrlen);
</h3>

```c
头文件：sys/socket.h
功能：把一个 本地 协议地址赋予一个套接字。
      对于网际网协议，协议地址是：IP地址（v4/v6）与端口号（TCP/UDP)的组合。
形参说明：
    sockfd：  socket()函数的返回值。
    myaddr：  指向特定于协议的地址结构的指针。
    addrlen： 套接字地址结构的长度。
返回值：若成功则为0，若出错则为-1。
       
可能的出错（errno）：
1、EADDRINUSE
    7.5再详细说明。

套接字状态：
    无变化

说明：
1、若没有调用bind()绑定一个端口，或端口是 0 ，
调用connect()或listen()时，内核会选择一个临时端口。
此临时端口可以通过getsockname()来返回。

2、若通过bind()绑定了IP地址（IP地址必须属于主机网络接口之一），
对TCP客户而言，为通过此套接字发送的IP数据报指定了源IP地址；
对TCP服务器而言，限定该套接字只接收目的地为此IP地址的客户连接。

3、若没有通过bind()绑定IP地址，或绑定的是通配地址，
对TCP客户而言，根据外出网络接口来选择源IP地址。
对TCP服务器而言，选择客户发送的SYN的目的IP地址，作为源IP地址。

通配地址：IPv4：INADDR_ANY
         IPv6：in6addr_any （netinet/in.h 中声明的）

一般而言：
         TCP客户不调用bind()，即路由选择IP地址，内核选择临时端口。
         TCP服务器只指定端口，地址选择为通配地址。
    
示例代码（TCP服务器）：
    struct sockaddr_in servaddr = {0};
    servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
    servaddr.sin_port        = htons(80);

    struct sockaddr_in6 servaddr6 = {0};
    servaddr6.sin6_addr = in6addr_any;  /* 结构体赋值 */
    servaddr6.sin6_port = htons(80);
```

[回顶部](#file_func "回顶部")

<h3 id=func_listen>
    int listen(int sockfd, int backlog);
</h3>

```c
头文件：sys/socket.h
功能：把一个未连接的套接字转换成一个被动套接字，
     指示内核应接受指向该套接字的连接请求。
形参说明：
    sockfd： socket()函数的返回值。
    backlog: 内核应该为相应套接字排队的最大连接个数。详细说明见下方。
返回值：若成功则为0，若出错则为-1。
       
套接字状态：
    CLOSED -> LISTEN

调用时机：
    调用socket()和bind()两个函数之后，调用accept()函数之前。

说明：
1、内核为每个监听套接字维护两个队列：
未完成连接队列：
    收到客户发来的SYN分节时，将在此队列创建一个新项。
    若队列已满，服务器不会对SYN做出任何响应，因为客户还会重发SYN。
    即套接字处于SYN_RCVD状态，还未完成三次握手。
    如果完成三次握手，或超时，套接字将被移出队列。
已完成连接队列：
    未完成连接队列中的套接字完成连接后，将会移动到本队列的尾部。
    即套接字处于ESTABLISHED状态。
    进程调用accept()时，此队列的队头将返回给进程。如果队列为空，accept()将阻塞。

2、backlog参数
(1) 此参数决定两个队列的长度之和，不同的系统有不同的解释。
(2) 不要把此参数设置为0。
(3) 繁忙的服务器，此值要设置的大一点。
(4) 此值不要写死，可以通过选项或环境变量来更改。

3、三次握手完成之后，调用accept()之前接收到的数据，应由服务器TCP排队。
最大数据量为相应已连接套接字的接收缓冲区大小。
```

[回顶部](#file_func "回顶部")

<h3 id=func_accept>
    int accept(int sockfd,  
    <a href="../03/struct.md#struct_sockaddr" title="通用套接字地址">
        struct sockaddr
    </a>
    *cliaddr,
    <abbr title="套接字地址结构的长度，通常为uint32_t">
        socklen_t
    </abbr> *addrlen);
</h3>

```c
头文件：sys/socket.h
功能：从已完成连接队列队头返回下一个已完成连接。
      如果队列为空，进程被投入睡眠（假设套接字为默认的阻塞方式）
形参说明：
    sockfd： 监听套接字，socket()函数的返回值。
    cliaddr: 返回已连接的对端进程（客户）的协议地址。
    addrlen：值-结果参数，指明cliaddr的大小，返回内核在cliaddr结构体上存储的字节数。
返回值：若成功则为非负套接字（已连接套接字），若出错则为-1。
       
套接字状态：
    无变化

说明：
1、此函数最多返回三个值：
    监听套接字（也可能是出错指示）
    客户进程的协议地址（cliaddr）
    协议地址的大小（addrlen）
2、如果对客户进程的协议地址不感兴趣，cliaddr和addrlen可以为NULL。

3、参数sockfd被称为监听套接字；返回值被称为已连接套接字，是一个全新的套接字。
4、一个服务器通常仅创建一个监听套接字，在该服务器的生命周期内一直存在。
5、内核为每个由服务器进程接受的客户连接创建一个已连接套接字。完成服务后，已连接套接字将被关闭。
```

[回顶部](#file_func "回顶部")

<h3 id=func_close>
    int close(int sockfd);
</h3>

```c
头文件：unistd.h
功能：关闭套接字并终止TCP连接。
形参说明：
    sockfd： 套接字描述符，socket()函数的返回值。
返回值：若成功则为0，若出错则为-1。
       
套接字状态：
客户：
    ESTABLISHED -> FIN_WAIT_1 -> FIN_WAIT_2 -> TIME_WAIT -> CLOSED
服务器：
    ESTABLISHED -> CLOSE_WAIT -> LAST_ACK -> CLOSED

说明：
1、close() 只是将描述符的引用计数减1。如果引用计数仍然大于0，不会触发TCP连接断开。
2、如果引用计数减到0，将描述符标记为关闭，并立即返回到调用进程。
   关闭的描述符不能用于 read()/write()。
3、TCP将套接字发送缓冲区的数据发送完毕后，才是正常的TCP连接终止序列。
```

[回顶部](#file_func "回顶部")

<h3 id=func_getsockname>
    int getsockname(int sockfd,  
    <a href="../03/struct.md#struct_sockaddr" title="通用套接字地址">
        struct sockaddr
    </a>
    *localaddr,
    <abbr title="套接字地址结构的长度，通常为uint32_t">
        socklen_t
    </abbr> *addrlen);
</h3>

```c
头文件：sys/socket.h
功能：返回与套接字相关的 本地 协议地址。
     如果IP地址或端口号是由内核指定的，可通过调用此函数来获取。
形参说明：
    sockfd： 套接字描述符，socket()函数的返回值。
    localaddr：返回套接字的本地协议地址。
    addrlen：值-结果参数，指明localaddr的大小，返回内核在localaddr结构体上存储的字节数。
返回值：若成功则为0，若出错则为-1。
```

[回顶部](#file_func "回顶部")

<h3 id=func_getpeername>
    int getpeername(int sockfd,  
    <a href="../03/struct.md#struct_sockaddr" title="通用套接字地址">
        struct sockaddr
    </a>
    *peeraddr,
    <abbr title="套接字地址结构的长度，通常为uint32_t">
        socklen_t
    </abbr> *addrlen);
</h3>

```c
头文件：sys/socket.h
功能：返回与套接字相关的 外地 协议地址。
     当服务器调用accept()后通过调用exec()执行程序，
     获取客户协议地址的唯一方法是调用 getpeername()。
形参说明：
    sockfd： 套接字描述符，socket()函数的返回值。
    peeraddr：返回套接字的本地协议地址。
    addrlen：值-结果参数，指明peeraddr的大小，返回内核在peeraddr结构体上存储的字节数。
返回值：若成功则为0，若出错则为-1。
```

[回顶部](#file_func "回顶部")