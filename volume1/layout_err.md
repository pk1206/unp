# UNIX环境高级编程 卷1：套接字联网API

记录阅读此书时发现的排版错误，或其他一些值得商榷的地方。



## 书籍版本
2015年8月第2版
2017年9月北京第9次印刷

## P72
在72页的虚线框中，函数 [writen()](03/func.md#func_writen) 的声明，多了一个 `t`。应该是
```c
ssize_t writen(int fd, const void *buff, size_t nbytes);
```
而不是
```c
ssize_t written(int fd, const void *buff, size_t nbytes);
```