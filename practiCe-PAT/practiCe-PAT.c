//
//  main.c
//  PAT
//
//  Created by Yun Yan on 8/16/14.
//  Copyright (c) 2014 Yun Yan. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <string.h>
#include "ElementaryArithmetic.h"
#include "LengthConverter.h"
#include "TimeCounter.h"
#include "ReverseNumber.h"
#include "DescriptBCD.h"
#include "PAT03x.h"
#include "mooc.h"

static int usage()
{
	fprintf(stderr, "\n");
	fprintf(stderr, "Usage: practiCe <题目编号> <参数>\n");
	fprintf(stderr, "题目编号:\n");
	
	fprintf(stderr, "02-0\t整数的四则运算\n");
	fprintf(stderr, "02-1\t厘米转换为英尺与英寸\n");
	fprintf(stderr, "02-2\t然后是几点钟\n");
	fprintf(stderr, "02-3\t逆序的三位数\n");
	fprintf(stderr, "02-4\tBCD解密\n");
	
	fprintf(stderr, "03-0\t超速判断\n");
	fprintf(stderr, "03-1\t打渔还是晒网\n");
	fprintf(stderr, "03-2\t天平找小球\n");
	fprintf(stderr, "03-3\t12-24小时进制转换\n");
	fprintf(stderr, "03-4\t成绩转换\n");
	
	fprintf(stderr, "mooc3-1\t奇偶个数\n");
	fprintf(stderr, "mooc3-2\t数字特征值\n");
 
	fprintf(stderr, "mooc4-1\t求和第n个到第m个素数之和\n");
	
	return 1; // Running come across with certain problems.
}

int main(int argc, char *argv[])
{

	if (argc == 1) return usage();
	char *pNUMBERPUZZLE = argv[1];
	if (strcmp(argv[1], "02-0") == 0) ElementaryArithmetic();
	else if (strcmp(argv[1], "02-1") == 0) LengthConverter();
	else if (strcmp(argv[1], "02-2") == 0) TimeCounter();
	else if (strcmp(argv[1], "02-3") == 0) ReverseNumber();
	else if (strcmp(argv[1], "02-4") == 0) DescriptBCD();
	else if (strcmp(argv[1], "03-0") == 0) PAT03x(pNUMBERPUZZLE);
	else if (strcmp(argv[1], "03-1") == 0) PAT03x(pNUMBERPUZZLE); 
	else if (strcmp(argv[1], "03-2") == 0) PAT03x(pNUMBERPUZZLE);
	else if (strcmp(argv[1], "03-3") == 0) PAT03x(pNUMBERPUZZLE);
	else if (strcmp(argv[1], "03-4") == 0) PAT03x(pNUMBERPUZZLE);
	
	else if (strcmp(argv[1], "mooc3-1") == 0) mooc(pNUMBERPUZZLE);
	else if (strcmp(argv[1], "mooc3-2") == 0) mooc(pNUMBERPUZZLE);
	else if (strcmp(argv[1], "mooc4-1") == 0) mooc(pNUMBERPUZZLE);
	else if (strcmp(argv[1], "mooc4-2") == 0) mooc(pNUMBERPUZZLE);
	else {
		fprintf(stderr, "找不到['%s']题，请确认是否存在于题库中或者等待我更新\n", argv[1]);
		return 1;
	}
	return 0;
}


