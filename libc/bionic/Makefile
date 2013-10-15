# LSC For now
NOGCCERROR:= yes

LIB=   	bionic

CPPFLAGS+=      -I${.CURDIR}/../include -I${.CURDIR}/.. -I${.CURDIR}/../arch-x86/include/ -I${.CURDIR}/../private
CPPFLAGS+=      -I${.CURDIR}/../arch/${ARCHSUBDIR} -I${.CURDIR}/../arch-x86/include/ -I${.CURDIR}/../private

CFLAGS+=      -I${.CURDIR}/../include -I${.CURDIR}/.. -I${.CURDIR}/../arch-x86/include/ -I${.CURDIR}/../private
CFLAGS+=      -I${.CURDIR}/../arch/${ARCHSUBDIR} -I${.CURDIR}/../arch-x86/include/ -I${.CURDIR}/../private

INCS=   
SRCS=  abort.c arc4random.c assert.c atoi.c atol.c atoll.c bindresvport.c brk.c clearenv.c cpuacct.c

INCSDIR= /usr/include

.include <bsd.lib.mk>

