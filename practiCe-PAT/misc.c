//
//  misc.c
//  practiCe-PAT
//
//  Created by Yun Yan on 12/23/14.
//  Copyright (c) 2014 Yun Yan. All rights reserved.
//
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include "misc.h"

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

int power2(int x){
	int a = 1;
	if (x > 0){
		while (x != 0) {
			a = 2 * a;
			x --;
		}
	}
	else if (x < 0){
		a = 0;
	}
	else {};
	return a;
}

bool isOdd(int x){
	bool out = false;
	if (x < 0){
		x = -1 * x;
	}
	
	if (x % 2 != 0) {
		out = true;
	}

	return out;
}
bool isPrime(int x){
	bool out = true;
	if (x >= 1 && x <= 3){
		out = true;
	} else if (x == 4){
		out = false;
	} else {
		int max_i = (int)(sqrt(x)) + 1;
		for (int i = 3; i <= max_i; i++) {
			if (x % 2 == 0){
				out = false;
				break;
			}
			if (isOdd(i)) {
				if (x % i == 0) {
					out = false;
					break;
				}
			}
		}
	}
	return out;
}