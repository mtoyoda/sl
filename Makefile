#==========================================
#    Makefile: makefile for sl 5.1
#	Copyright 1993, 1998, 2014
#                 Toyoda Masashi
#		  (mtoyoda@acm.org)
#	Last Modified: 2015/06/20
#==========================================
#	Hiroyuki Yamamoto <yama1066@gmail.com>
#	Modify for Debian 2008/12/27
#	Beefcurtains and Kylesusername:
#	Adapted for Void Linux 2015/12/27

LDLIBS=-lncurses

all: sl sl-h

sl: sl.o

sl-h: sl-h.o

clean:
	rm -f sl sl-h *.o

distclean: clean
