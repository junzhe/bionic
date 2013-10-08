# LSC For now
NOGCCERROR:= yes

LIB=    unistd

CPPFLAGS+=      -I${.CURDIR}/../include -I${.CURDIR}/.. -I/usr/include/
CPPFLAGS+=      -I${.CURDIR}/../arch/${ARCHSUBDIR} -I/usr/include/

CFLAGS+=      -I${.CURDIR}/../include -I${.CURDIR}/.. -I/usr/include/
CFLAGS+=      -I${.CURDIR}/../arch/${ARCHSUBDIR} -I/usr/include/

INCS=   charclass.h
SRCS=   alarm.c  exec.c fnmatch.c syslog.c system.c time.c

INCSDIR= /usr/include

.include <bsd.lib.mk>

