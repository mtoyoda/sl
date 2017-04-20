#==========================================
#    Makefile: makefile for sl 5.1
#	Optimized for PDCurses by tomsterley
#	Copyright 1993, 1998, 2014, 2016
#                 Toyoda Masashi
#		  (mtoyoda@acm.org)
#		  Tomsterley
#		  (tommynaj@gmail.com)
#	Last Modified: 2016/06/19
#==========================================

CC=gcc
CFLAGS=-O -Wall

sl: sl.c sl.h
	$(CC) $(CFLAGS) -o sl sl.c -lpdcurses
