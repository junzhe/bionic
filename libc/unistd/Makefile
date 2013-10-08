# LSC For now
NOGCCERROR:= yes

LIB=    unistd

CPPFLAGS+=      -I${.CURDIR}/../include -I${.CURDIR}/..
CPPFLAGS+=      -I${.CURDIR}/../arch/${ARCHSUBDIR}

CFLAGS+=      -I${.CURDIR}/../include -I${.CURDIR}/..
CFLAGS+=      -I${.CURDIR}/../arch/${ARCHSUBDIR}

INCS=   charclass.h
SRCS=   alarm.c  exec.c fnmatch.c syslog.c system.c time.c

INCSDIR= /usr/include

.include <bsd.lib.mk>

