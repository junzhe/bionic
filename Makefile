#       $OpenBSD: Makefile,v 1.3 2007/05/29 18:24:56 ray Exp $
NOGCCERROR:= yes

PROG = hello
SRCS=   hello.cpp

.include <bsd.prog.mk>
