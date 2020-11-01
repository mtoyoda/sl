#==========================================
#    Makefile: makefile for sl 5.1
#	Copyright 1993, 1998, 2014
#                 Toyoda Masashi
#		  (mtoyoda@acm.org)
#	Last Modified: 2020/11/01
#==========================================

build:
	@gcc sl.c -o sl

install:
	@mv sl /usr/bin/sl
	@chmod 777 /usr/bin/sl

uninstall:
	@rm /usr/bin/sl
