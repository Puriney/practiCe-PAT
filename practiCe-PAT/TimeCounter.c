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

	int t0 = 0;
	int delta_t = 0;
	scanf("%d, %d", t0, delta_t);
	
	t0_hr  = t0 / 100;
	t0_min = t0 % 100;
	t0 = t0_hr * 60 + t0_min;
	
	int t1 = t0 + delta_t;
	int t1_hr = t1 / 100;
	int t1_min = t1 % 100;
	
	printf("%d, %d", t1_hr, t1_min);
	
}