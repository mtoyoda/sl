#==========================================
#    Makefile: makefile for sl 5.02
#	Copyright 1993, 1998, 2014
#                 Toyoda Masashi
#		  (mtoyoda@acm.org)
#	Last Modified: 2016/12/08
#==========================================

CC=gcc
CFLAGS=-O

sl: sl.c sl.h
	$(CC) $(CFLAGS) -o sl sl.c -lncurses
