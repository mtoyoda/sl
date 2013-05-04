#==========================================
#    Makefile: makefile for sl 5.0
#	Copyright 1993, 1998, 2013
#                 Toyoda Masashi 
#		  (mtoyoda@acm.org)
#	Last Modified: 2013/ 5/ 5
#==========================================

CC=gcc
CFLAGS=-O

sl: sl.c sl.h
	$(CC) $(CFLAGS) -o sl sl.c -lncurses

