# LSC For now
NOGCCERROR:= yes

LIB=    tzcode

CPPFLAGS+=      -I${.CURDIR}/../include -I${.CURDIR}/.. -I${.CURDIR}/../arch-x86/include/
CPPFLAGS+=      -I${.CURDIR}/../arch/i386 -I${.CURDIR}/../arch-x86/include/

CFLAGS+=      -I${.CURDIR}/../include -I${.CURDIR}/.. -I${.CURDIR}/../arch-x86/include/
CFLAGS+=      -I${.CURDIR}/../arch/i386 -I${.CURDIR}/../arch-x86/include/

INCS=	private.h  tzfile.h
SRCS=  	asctime.c  difftime.c  localtime.c  strftime.c  strptime.c

INCSDIR= /usr/include

.include <bsd.lib.mk>

