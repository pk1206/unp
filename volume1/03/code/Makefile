
CC = gcc
CFLAGS =
LDFLAGS = 
LDLIBS =

PROGS  = test_bcmp
PROGS += test_inet_ntoa
PROGS += test_memcmp
PROGS += test_memset
PROGS += test_inet_aton
PROGS += test_inet_addr
PROGS += test_inet_pton
PROGS += test_inet_ntop

all:	${PROGS}

%:	%.c
	$(CC) $(CFLAGS) $@.c -o $@ $(LDFLAGS) $(LDLIBS)

clean:
	rm -f $(PROGS) *.o
