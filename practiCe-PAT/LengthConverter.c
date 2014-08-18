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
	printf("// 开始解答：长度转换\n" \
		   "// 输入格式：\n" \
		   "// 输入在一行中给出1个正整数，单位是厘米。\n");

	//	公式1： foot = m / 0.3048
	//	公式2： foot = inch / 12
	//	公式3： m = cm / 100
	
	//	输入样例：
	//	170
	//	输出样例：
	//	5 6
	int l_cm = 0;

	float const EQUATION = 0.3048;
	int const FOOTINCH = 12;
	float const CM2M = 100.0;
	printf("// 输入长度(单位厘米):\n");
	scanf("%d", &l_cm);
	
	//	第一步
	//	根据公式1和2 从cm转换为foot
	float l_m = l_cm / CM2M;
	float m2foot = l_m / EQUATION;
	fprintf(stderr, ">> %d cm = %.5f feet\n", l_cm, m2foot);
	
	//	第二步
	//	强制转换浮点型到整数型取整数foot
	//	小数点转换为inch
	int o_foot = m2foot;
	int o_inch = (m2foot - o_foot) * FOOTINCH;
	
	printf("%d %d\n", o_foot, o_inch);
	
}
