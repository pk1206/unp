<h1 id=file_struct>
    第03章结构体
</h1>

[本章函数表](func.md "包含本章所介绍函数的详细说明")
[本章笔记](notes.md "第03章笔记")
[章节目录](../volume1.md "章节目录")

---

<h3 id=ipv4_sockaddr_struct>IPv4套接字地址结构</h3>

<p id=struct_in_addr></p>

```c 
struct in_addr {
    in_addr_t s_addr;       /* 32bit IPv4 address */
                            /* network byte ordered */
}
```

<p id=struct_sockaddr_in></p>

```c
struct sockaddr_in {
    unit8_t        sin_len;
    sa_family_t    sin_family;
    in_port_t      sin_port;
    struct in_addr sin_addr;
    char           sin_zero[8];
}
```

<h3 id=common_sockaddr_struct>通用套接字地址结构</h3>

<p id=struct_sockaddr></p>

```c
struct sockaddr {
    uint8_t     sa_len;
    sa_family_t sa_family;
    char        sa_data[14];
}
```

<h3 id=ipv6_sockaddr_struct>IPv6 套接字地址结构</h3>

<p id=struct_in6_addr></p>

```c
struct in6_addr {
    uint8_t s6_addr[16];
}
```

<p id=struct_sockaddr_in6></p>

```c
struct sockaddr_in6 {
    uint8_t           sin6_len;
    sa_family_t       sin6_family;
    in_port_t         sin6_port;
    uint32_t          sin6_flowinfo;
    struct in6_addr   sin6_addr;
    uint32_t          sin6_scope_id;
}
```


<h3 id=new_common_sockaddr_struct>新的通用套接字地址结构</h3>

<p id=struct_sockaddr_storage></p>

```c
struct sockaddr_storage {
    uint8_t      ss_len;
    sa_family_t  ss_family;
    /* 
     *
     *
     *
     *
     */
}
```

[本章函数表](func.md "包含本章所介绍函数的详细说明")
[本章笔记](notes.md "第03章笔记")
[章节目录](../volume1.md "章节目录")