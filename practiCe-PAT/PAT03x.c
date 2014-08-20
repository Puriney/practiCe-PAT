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
	else if (strcmp(puzzle, "03-2") == 0) Scale();
	else if (strcmp(puzzle, "03-3") == 0) TimeFormator();
	else if (strcmp(puzzle, "03-4") == 0) GPA();
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
		case 0:
			tag = "Drying";
			break;
		default:
			break;
	}
	
	/* Alternatives:
	day = (n -1) % kCYCLE;
	if (day <3) tag = "Fishing"; 
	else  tag = "Drying";
	*/
	printf("%s in day %d\n", tag, n);
}

/*
	03-2 Scale
*/
void Scale(void){
	fprintf(stderr, "开始解题: 找小球\n");
	fprintf(stderr, "请输入3个数字, 两个相同, 一个不同\n");
	int a;
	int b;
	int c;
	scanf("%d %d %d", &a, &b, &c);
	/* Should have pre-test to check here!
	 whether two are same and only one is different
	*/
	
	/* 
		Non-flexible version
	*/
	char *o = "UNKNOWN";
	if (a == b){
		o = "C";
	}
	else {
		if (a == c) {
			o = "B";
		}
		else {
			o = "A";
		}
	}
	printf("%s\n", o);
	
}

/*
	03-3 TimeFormator
*/
void TimeFormator(void){
	fprintf(stderr, "开始解题: 12/24小时转换\n");
	fprintf(stderr, "请输入一个24小时制的时间\n");
	int hr_24 = 0;
	char *tag = "AM";
	int min_24 = 0;
	scanf("%d:%d", &hr_24, &min_24);
	int min_12 = min_24;
	int hr_12 = 0;
	if (hr_24 < 12) {
		hr_12 = hr_24;
		tag = "AM";
	} else if (hr_24 == 12){
		hr_12 = hr_24;
		tag = "PM";
	} else if (hr_24 > 12){
		hr_12 = hr_24 - 12;
		tag = "PM";
	} else {}
	fprintf(stderr, "12小时制时间为:\n");
	printf("%d:%d %s\n", hr_12, min_12, tag);
}

/*
	03-4 GPA
*/
void GPA(void){
	fprintf(stderr, "开始解题: 学分转换\n");
	fprintf(stderr, "请输入一个[0, 100]以内的分数\n");
	int score = 0;
	char *grade = "N";
	scanf("%d", &score);
	grade =
		score > 100 ? "ERROR":
		score >= 90 ? "A" :
		score >= 80 ? "B" :
		score >= 70 ? "C" :
		score >= 60 ? "D" :
		score >=  0 ? "E" :
		"ERROR";
	printf("%s\n", grade);
}

