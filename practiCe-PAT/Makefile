CC=gcc
CFLAGS=-g

OBJS=\
	practiCe-PAT.o	\
	ElementaryArithmetic.o
HOBJS=\
	ElementaryArithmetic.h

all:$(OBJS)
	gcc	$(OBJS)	-o	practiCe-PAT

practiCe-PAT.o:practiCe-PAT.c	$(HOBJS)
	gcc	-c	practiCe-PAT.c

ElementaryArithmetic.o:ElementaryArithmetic.c	ElementaryArithmetic.h
	gcc	-c	ElementaryArithmetic.c
    
clean:
	rm -rf *.o
	rm practiCe-PAT
