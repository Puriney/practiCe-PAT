CC=gcc
CFLAGS=-g

OBJS=\
	practiCe-PAT.o	\
	misc.o	\
	ElementaryArithmetic.o	\
	LengthConverter.o	\
	TimeCounter.o	\
	ReverseNumber.o	\
	DescriptBCD.o	\
	PAT03x.o	\
	mooc3.o

HOBJS=\
	ElementaryArithmetic.h	\
	misc.o	\
	LengthConverter.h	\
	TimeCounter.h	\
	ReverseNumber.h	\
	DescriptBCD.h	\
	PAT03x.h	\
	mooc3.o

all:$(OBJS)
	gcc	$(OBJS)	-o	practiCe-PAT

practiCe-PAT.o:practiCe-PAT.c	$(HOBJS)
	gcc	-c	practiCe-PAT.c

misc.o:misc.c	misc.h
	gcc -c misc.c

ElementaryArithmetic.o:ElementaryArithmetic.c	ElementaryArithmetic.h
	gcc	-c	ElementaryArithmetic.c

LengthConverter.o:LengthConverter.c	LengthConverter.h
	gcc -c LengthConverter.c
	
TimeCounter.o:TimeCounter.c	TimeCounter.h
	gcc -c TimeCounter.c

ReverseNumber.o:ReverseNumber.c ReverseNumber.h
	gcc -c ReverseNumber.c

DescriptBCD.o:DescriptBCD.c	DescriptBCD.h
	gcc -c DescriptBCD.c
	
PAT03x.o:PAT03x.c	PAT03x.h
	gcc -c PAT03x.c

mooc3.o:mooc3.c	mooc3.h
	gcc	-c	mooc3.c
	
clean:
	rm -rf *.o
	rm practiCe-PAT
