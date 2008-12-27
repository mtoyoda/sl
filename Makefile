#==========================================
#    Makefile: makefile for sl 5.1
#	Copyright 1993, 1998, 2014
#                 Toyoda Masashi
#		  (mtoyoda@acm.org)
#	Last Modified: 2014/03/31
#==========================================
#	Hiroyuki Yamamoto <yama1066@gmail.com>
#	Modify for Debian 2008/12/27
CC=gcc
CFLAGS=-O

all: sl

sl: sl.c sl.h
	$(CC) $(CFLAGS) -o sl sl.c -lncurses

clean:
	rm -f sl

distclean: clean
