# LSC For now
NOGCCERROR:= yes

LIB=    stdio

CPPFLAGS+=      -I${.CURDIR}/../include -I${.CURDIR}/.. -I${.CURDIR}/../arch-x86/include/
CPPFLAGS+=      -I${.CURDIR}/../arch/${ARCHSUBDIR} -I${.CURDIR}/../arch-x86/include/

CFLAGS+=      -I${.CURDIR}/../include -I${.CURDIR}/.. -I${.CURDIR}/../arch-x86/include/
CFLAGS+=      -I${.CURDIR}/../arch/${ARCHSUBDIR} -I${.CURDIR}/../arch-x86/include/

INCS=   fileext.h  floatio.h  fvwrite.h  glue.h  local.h  wcio.h
SRCS=   asprintf.c  fgetc.c   fprintf.c  fread.c    fscanf.c  ftell.c    gets.c    refill.c  scanf.c     sprintf.c  stdio.c   vasprintf.c  vfscanf.c  vscanf.c     vsprintf.c  wbuf.c fflush.c    findfp.c  fputc.c    freopen.c  fseek.c   fvwrite.c  printf.c  rewind.c  snprintf.c  sscanf.c   ungetc.c  vfprintf.c   vprintf.c  vsnprintf.c  vsscanf.c

INCSDIR= /usr/include

.include <bsd.lib.mk>

