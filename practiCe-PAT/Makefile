CC=gcc
CFLAGS=-g

OBJS=\
	practiCe-PAT.o	\
	ElementaryArithmetic.o	\
	LengthConverter.o
HOBJS=\
	ElementaryArithmetic.h	\
	LengthConverter.o

all:$(OBJS)
	gcc	$(OBJS)	-o	practiCe-PAT

practiCe-PAT.o:practiCe-PAT.c	$(HOBJS)
	gcc	-c	practiCe-PAT.c

ElementaryArithmetic.o:ElementaryArithmetic.c	ElementaryArithmetic.h
	gcc	-c	ElementaryArithmetic.c

LengthConverter.o:LengthConverter.c	LengthConverter.h
	gcc -c LengthConverter.c
    
clean:
	rm -rf *.o
	rm practiCe-PAT
