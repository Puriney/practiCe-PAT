CC=gcc
CFLAGS=-g

OBJS=\
	practiCe-PAT.o	\
	ElementaryArithmetic.o	\
	LengthConverter.o	\
	TimeCounter.o	\
	ReverseNumber.o	\
	DescriptBCD.o	\
	PAT03x.o

HOBJS=\
	ElementaryArithmetic.h	\
	LengthConverter.h	\
	TimeCounter.h	\
	ReverseNumber.h	\
	DescriptBCD.h	\
	PAT03x.h

all:$(OBJS)
	gcc	$(OBJS)	-o	practiCe-PAT

practiCe-PAT.o:practiCe-PAT.c	$(HOBJS)
	gcc	-c	practiCe-PAT.c

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
	
clean:
	rm -rf *.o
	rm practiCe-PAT
