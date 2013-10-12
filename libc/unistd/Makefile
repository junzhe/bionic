# LSC For now
NOGCCERROR:= yes

LIB=    unistd

CPPFLAGS+=      -I${.CURDIR}/../include -I${.CURDIR}/.. -I${.CURDIR}/../arch-x86/include/
CPPFLAGS+=      -I${.CURDIR}/../arch/${ARCHSUBDIR} -I${.CURDIR}/../arch-x86/include/

CFLAGS+=      -I${.CURDIR}/../include -I${.CURDIR}/.. -I${.CURDIR}/../arch-x86/include/
CFLAGS+=      -I${.CURDIR}/../arch/${ARCHSUBDIR} -I${.CURDIR}/../arch-x86/include/

INCS=   charclass.h
SRCS=   alarm.c  execl.c  execle.c  execlp.c  execv.c  execvp.c  fnmatch.c  syslog.c  system.c  time.c

INCSDIR= /usr/include

.include <bsd.lib.mk>

