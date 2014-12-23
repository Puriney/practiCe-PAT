//
//  mooc3.c
//  practiCe-PAT
//
//  Created by Yun Yan on 12/23/14.
//  Copyright (c) 2014 Yun Yan. All rights reserved.
//
#include <stdio.h>
#include <math.h>
#include <string.h>
#include "mooc3.h"
#include "misc.h"

int mooc3(char *puzzle){
	int run = 0;
	
	if (strcmp(puzzle, "mooc3-1") == 0) NumberOfEvenOdd();
	else if (strcmp(puzzle, "mooc3-2") == 0) CharacterOfNumber();
	
	else {
		run = 1; 
	}
	return run;
}

void NumberOfEvenOdd(void) {
	int num;

	int nEven = 0;
	int nOdd = 0;

	while (num != -1) {
		scanf("%d", &num);
		if (num > 0 && num < 100000){
			if (num % 2 == 0) {
				nEven = nEven + 1;
			} else {
				nOdd = nOdd + 1;
			}
		}
	}
	printf("%d %d", nOdd, nEven);
}

int EvenOdd (int num){
	int out = 0;
	if (num % 2 == 0) { // even
		out = 1;
	} else {			// odd
		out = -1;
	}
	return out;
}

void CharacterOfNumber(void){
	int x ;
	while (1) {
		scanf("%d", &x);
		if (x >= 0 && x <= 1000000) {
			break;
		}
	}
//	printf("intput is %d", x);
	
//	digits of input number X
	int digits;
	if ( x > 0) digits	= floor(log10(x)) + 1;
	else if (x < 0) digits = floor(log10(-x)) + 1;
	else digits = 0;
	
	int out = 0;
	for (int d = 1; d <= digits; d++){
		int eod = EvenOdd(d);
		int i = x % 10;
		x = (int)(x / 10);
		int eoi = EvenOdd(i);
		int eo = 0;
		if (eoi == eod) {
			eo = 1;
		}
//		printf("Num on digit(%d)[eo %d] is (%d)[eo %d]\n", d, eod, i, eoi); 
		out = out + power2(d - 1) * eo;
	}
	printf("%d", out);
}