# LSC For now
NOGCCERROR:= yes

LIB=    dlmalloc

CPPFLAGS+=      -I${.CURDIR}/../include -I${.CURDIR}/.. -I${.CURDIR}/../arch-x86/include/
CPPFLAGS+=      -I${.CURDIR}/../arch/${ARCHSUBDIR} -I${.CURDIR}/../arch-x86/include/

CFLAGS+=      -I${.CURDIR}/../include -I${.CURDIR}/.. -I${.CURDIR}/../arch-x86/include/
CFLAGS+=      -I${.CURDIR}/../arch/${ARCHSUBDIR} -I${.CURDIR}/../arch-x86/include/

INCS=   malloc.h
SRCS=   malloc.c

INCSDIR= /usr/include

.include <bsd.lib.mk>

