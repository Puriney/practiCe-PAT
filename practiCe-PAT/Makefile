CC=gcc
CFLAGS=-g

OBJS=\
	practiCe-PAT.o	\
	ElementaryArithmetic.o	\
	LengthConverter.o	\
	TimeCounter.o

HOBJS=\
	ElementaryArithmetic.h	\
	LengthConverter.h	\
	TimeCounter.h

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
    
clean:
	rm -rf *.o
	rm practiCe-PAT
