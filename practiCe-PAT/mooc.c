//
//  mooc.c
//  practiCe-PAT
//
//  Created by Yun Yan on 12/23/14.
//  Copyright (c) 2014 Yun Yan. All rights reserved.
//
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#include "mooc.h"
#include "misc.h"

int mooc(char *puzzle){
	int run = 0;
	
	if (strcmp(puzzle, "mooc3-1") == 0) NumberOfEvenOdd();
	else if (strcmp(puzzle, "mooc3-2") == 0) CharacterOfNumber();
	else if (strcmp(puzzle, "mooc4-1") == 0) SumPrimes();
	
	else {
		run = 1; 
	}
	return run;
}

// Week 3 Starts
// 3.1
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

// 3.2
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
// Week 3 Ends

// --------------
// Week 4 Starts
// --------------
// 4.1
int SumPrimes(void){
//	Goal: Yield the sum of [n_th, m_th] prime numbers
//	0 < n <= m <= 200
	fprintf(stderr, "求第n个到第m个素数的和\n");
	fprintf(stderr, "请依次输入两个整数直至0 < n <= m <= 200\n");
	
// 	Step 1: Set up input:
	int n = 0;
	int m = 0;
	while (1 == 1){
		scanf("%d", &n);
		scanf("%d", &m);
		printf("输入为n = %d, m = %d\n", n, m);
		if (n > 0 && m >= n && m <= 200) {
			printf("合格\n");
			break;
		} else {
			printf("不合格输入，请重新输入\n");
		}
	}
	
// Step 2: Determine the max range number
// According to the therom: n = x / ln(x)
// such that n is the number of primes, x is the number
// n = NMAX thus x = 1456
// due to error rate 15%, thus expand to 1456 * 1.15 = 2185
// first 200 primes must fall into [2, 2185].
//	const int NMAX = 200;
	const int XMAX = 2185;
	int n_primes = 0;
	int sum_primes = 0;
	

	bool flag_is_prime = false;
	for (int x = 2; x < XMAX + 1; x ++) {
		
//		Step 2.1 Determine if primes
		if (x == 2) {
			flag_is_prime = true;
		} else if (x == 3) {
			flag_is_prime = true;
		} else {
			flag_is_prime = isPrime(x);
		}
		
//		Step 2.2 Determine if [n,m]
		if (flag_is_prime == true){
			n_primes ++;
			if (n_primes >= n){
				printf("%d_th prime is %d\n", n_primes, x);
				printf("prime is %d\n", x);
				sum_primes = sum_primes + x;
				if (n_primes == m){
					break;
				}
			}
		}
		
	}
	printf("%d\n", sum_primes);
	return sum_primes;
}

