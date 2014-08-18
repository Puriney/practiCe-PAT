//
//  ReverseNumber.c
//  practiCe-PAT
//
//  Created by Yun Yan on 8/18/14.
//  Copyright (c) 2014 Yun Yan. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include "ReverseNumber.h"


/* Though pow(a, b) function in math.h works */
int power10(int x){
	int a = 1;
	if (x > 0){
		while (x != 0) {
			a = 10 * a;
			x --;
		}
	}
	else if (x < 0){
		a = 0;
	}
	else {};
	return a;
}

void ReverseNumber(void){
	int x = 0;
	
	scanf("%d", &x);
	
	int digits;
	if ( x > 0) digits	= floor(log10(x)) + 1;
	else if (x < 0) digits = floor(log10(-x)) + 1;
	else digits = 0;
	
//	fprintf(stderr, "digits=%d", digits);
	int const kDIVIDER = 10;
	
	int o = 0;
	int i = digits;
	int n = 0;

/*	Reverse function */
	while (i != 0) {
		n  = x % kDIVIDER;
		x = x / kDIVIDER;
		o = o + n * power10(i - 1);
//		fprintf(stderr, "Last Digit=%d, Truncated Value=%d, Output=%d, step=%d\n", n, x, o, i);
		i --;
	}
	printf("%d\n", o); 
}