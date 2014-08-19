//
//  PAT03x.c
//  practiCe-PAT
//
//  Created by Yun Yan on 8/19/14.
//  Copyright (c) 2014 Yun Yan. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include "PAT03x.h"

int PAT03x(char *puzzle){
	int run = 0;
	
	if (strcmp(puzzle, "03-0") == 0) Overspeeding();
	else if (strcmp(puzzle, "03-1") == 0) FishingorDrying(); 
	else {
		run = 1;
	}
	
	
	
	return run;
}

/*
	03-0 Overspeeding
*/
void Overspeeding(void){
	
	fprintf(stderr, "开始解题: 超速判断\n");
	fprintf(stderr, "请输入一个不超过500的非负整数\n");
	int speed = 0;
	scanf("%d", &speed);
	char *tag = "UNKNOWN";
	
	if (speed < 0 || speed > 500) {
		printf("再闹我不跟你玩儿了\n");
	}
	else if (speed <= 60) {
		tag = "OK";
	}
	else if (speed > 60 && speed <= 500) {
		tag = "Speeding";
	}
	else {};
	
	printf("Speed %d - %s\n", speed, tag);
	
}

/*
	03-1 FishingorDrying
*/
void FishingorDrying(void){
	fprintf(stderr, "开始解题: 这一天你在打渔还是筛网?\n");
	fprintf(stderr, "请输入你今天是第几天\n");
	int n = -1;
	while (n < 0 ) {
		scanf("%d", &n);
		if (n < 0) fprintf(stderr, "宝贝别闹!!! 快输入一个天数\n");
	}
	
	int const kCYCLE = 5;
	int day = n % kCYCLE; /* day in cycle */
	char *tag = "UNKNOWN";
	switch (day) {
		case 1:
			tag = "Fishing";
			break;
		case 2:
			tag = "Fishiing";
			break;
		case 3:
			tag = "Fishing";
			break;
		case 4:
			tag = "Drying";
			break;
		case 5:
			tag = "Drying";
			break;
		default:
			break;
	}
	printf("%s in Day %d\n", tag, n);
}

/*
	03-2 Scale
*/
void Scale(void){
	
}

/*
	03-3 TimeFormator
*/
void TimeFormator(void){
	
}

/*
	03-4 GPA
*/
void GPA(void){
	
}

