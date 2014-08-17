//
//  LengthConverter.c
//  practiCe-PAT
//
//  Created by Yun Yan on 8/17/14.
//  Copyright (c) 2014 Yun Yan. All rights reserved.
//

#include <stdio.h>
//#include <math.h>
#include "LengthConverter.h"

void LengthConverter(void){
	printf("输入格式：" \
		   "输入在一行中给出1个正整数，单位是厘米。\n");

	//	公式1： (foot + inch / 12) * 0.3048 = cm
	//	公式2： foot = inch / 12
	
	//	输入样例：
	//	170
	//	输出样例：
	//	5 6
	int l_cm = 0;
	int o_foot = 0;
	int o_inch = 0;
	
	float const EQUATION = 0.3048;
	float const FOOTINCH = 12;
	scanf("输入长度(单位厘米): %d", &l_cm);
	
	//	第一步
	//	根据公式1和2 从cm转换为foot
	float cm2foot = l_cm / EQUATION / 2;
	
	o_foot = (int)cm2foot;
	o_inch = (int)((cm2foot - o_foot) * FOOTINCH);
	
	printf("%d %d", o_foot, o_inch);
	
	
}
