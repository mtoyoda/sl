#==========================================
#    Makefile: makefile for sl 6.0
#	Copyright 1993, 1998, 2014
#                 Toyoda Masashi
#		  (mtoyoda@acm.org)
#	Last Modified: 2014/06/16
#==========================================

CC=gcc
CFLAGS=-O

sl: sl.c sl.h
	$(CC) $(CFLAGS) -o sl sl.c -lncurses

install:
	gzip -9 -f sl.1
	install -D -m 0775 sl /usr/bin/sl
	install -Dm 644 sl.1.gz /usr/share/man/man1/sl.1.gz

uninstall:
	rm -rf /usr/bin/sl
	rm -rf /usr/share/man/man1/sl.1.gz

clean:
	rm -rf sl
