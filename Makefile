#==========================================
#    Makefile: makefile for sl 5.02
#	Copyright 1993, 1998, 2014
#                 Toyoda Masashi
#		  (mtoyoda@acm.org)
#	Last Modified: 2016/12/08
#==========================================

CC=gcc
CFLAGS=-O
PKG_CONFIG=pkg-config
LDFLAGS=`$(PKG_CONFIG) --libs ncurses`

sl: sl.c sl.h
	$(CC) $(CFLAGS) -o sl sl.c $(LDFLAGS)
