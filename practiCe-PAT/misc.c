//
//  misc.c
//  practiCe-PAT
//
//  Created by Yun Yan on 12/23/14.
//  Copyright (c) 2014 Yun Yan. All rights reserved.
//
#include <stdio.h>
#include <string.h>
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