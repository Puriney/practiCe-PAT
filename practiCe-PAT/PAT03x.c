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
	
	printf("开始解题: 超速判断\n");
	printf("请输入一个不超过500的非负整数\n");
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

