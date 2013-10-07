#       $OpenBSD: Makefile,v 1.3 2007/05/29 18:24:56 ray Exp $
NOGCCERROR:= yes

LIB = hello
SRCS=   hello.cpp

.include <bsd.lib.mk>
