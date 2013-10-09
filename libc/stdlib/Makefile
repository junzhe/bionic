# LSC For now
NOGCCERROR:= yes

LIB=    stdlib

CPPFLAGS+=      -I${.CURDIR}/../include -I${.CURDIR}/.. -I${.CURDIR}/../arch-x86/include/
CPPFLAGS+=      -I${.CURDIR}/../arch/${ARCHSUBDIR} -I${.CURDIR}/../arch-x86/include/

CFLAGS+=      -I${.CURDIR}/../include -I${.CURDIR}/.. -I${.CURDIR}/../arch-x86/include/
CFLAGS+=      -I${.CURDIR}/../arch/${ARCHSUBDIR} -I${.CURDIR}/../arch-x86/include/

INCS=   atexit.h
SRCS=   atexit.c  ctype_.c  exit.c  getenv.c  putenv.c  setenv.c  strtod.c  strtoimax.c  strtol.c  strtoll.c  strtoul.c  strtoull.c  strtoumax.c  tolower_.c  toupper_.c

INCSDIR= /usr/include

.include <bsd.lib.mk>

