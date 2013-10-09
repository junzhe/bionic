# LSC For now
NOGCCERROR:= yes

LIB=    string

CPPFLAGS+=      -I${.CURDIR}/../include -I${.CURDIR}/.. -I${.CURDIR}/../arch-x86/include/
CPPFLAGS+=      -I${.CURDIR}/../arch/${ARCHSUBDIR} -I${.CURDIR}/../arch-x86/include/

CFLAGS+=      -I${.CURDIR}/../include -I${.CURDIR}/.. -I${.CURDIR}/../arch-x86/include/
CFLAGS+=      -I${.CURDIR}/../arch/${ARCHSUBDIR} -I${.CURDIR}/../arch-x86/include/

SRCS=  bcopy.c  index.c  memcmp16.c  strcasecmp.c  strcat.c  strcmp.c  strcpy.c  strcspn.c  strdup.c  strlcat.c  strlcpy.c  strlen.c  strncat.c  strncmp.c  strncpy.c  strpbrk.c  strrchr.c  strsep.c  strspn.c  strstr.c  strtok.c 

INCSDIR= /usr/include

.include <bsd.lib.mk>

