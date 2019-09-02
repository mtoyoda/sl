#==========================================
#    Makefile: makefile for sl 5.1
#	Copyright 1993, 1998, 2014
#                 Toyoda Masashi
#		  (mtoyoda@acm.org)
#	Last Modified: 2014/03/31
#==========================================

CC=gcc
CFLAGS=-O -Wall

all: sl

sl: sl.c sl.h
	$(CC) $(CFLAGS) -o sl sl.c -lcurses

clean:
	rm -f sl

distclean: clean
