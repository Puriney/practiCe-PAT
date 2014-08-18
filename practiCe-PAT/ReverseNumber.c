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


// Though pow(a, b) function in math.h works
int power(int a, int b){
	int c = 1;
	if (b > 0){
		while (b != 0) {
			c = 10 * c;
			b --;
		}
		c = a * c;
	}
	else if (b < 0){
		c = 0;
	}
	else {};
	return c;
}

void ReverseNumber(void){
	int x = 0;
	
	scanf("%d", &x);
	
	int digits;
	if ( x > 0) digits	= floor(log10(x)) + 1;
	else if (x < 0) digits = floor(log10(-x)) + 1;
	else digits = 0;
	
	int const kDIVIDER = 10;
	
	int o = 0;
	int i = digits;
	int n = 0;
	
//	Reverse function
	while (i != 0) {
		n  = x % kDIVIDER;
		x = x / kDIVIDER;
		o = o + n * power(kDIVIDER, (i - 1));
		i --;
	}
	printf("%d\n", o); 
}