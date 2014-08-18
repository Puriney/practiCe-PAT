//
//  TimeCounter.c
//  practiCe-PAT
//
//  Created by Yun Yan on 8/18/14.
//  Copyright (c) 2014 Yun Yan. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include "TimeCounter.h"

void TimeCounter(void){
	
//	输入格式：
//	
//	输入在一行中给出2个整数，分别是四位数字表示的起始时间、以及流逝的分钟数，其间以空格分隔。
//	注意：在起始时间中，当小时为个位数时，没有前导的零，即5点30分表示为530；流逝的分钟数可能超过60，也可能是负数。
//
//	输出格式：
//	
//	输出四位数字表示的终止时间。题目保证起始时间和终止时间在同一天内。
	int const kTIMESCALE = 60;
	int t0;
	int delta_t_min;
	scanf("%d %d", &t0, &delta_t_min);
	printf("// User inputs are %d, and %d\n", t0, delta_t_min);
	int t0_hr  = (int)(t0 / 100);
	int t0_min = t0 % 100;
	
	t0 = t0_hr * kTIMESCALE + t0_min;
	printf("t0_hr=%d, t0_min=%d, t0=%d\n", t0_hr, t0_min, t0);
	int t1 = t0 + delta_t_min;
	int t1_hr = (int)(t1 / kTIMESCALE);
	int t1_min = t1 % kTIMESCALE;
	
	printf("// hour=%d, min=%d\n", t1_hr, t1_min);
	t1 = t1_hr * 100 + t1_min;
	printf("%d\n", t1);
	
}