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

static int usage()
{
	fprintf(stderr, "\n");
	fprintf(stderr, "Usage: practiCe <题目编号> <参数>\n");
	fprintf(stderr, "题目编号:\n");
	fprintf(stderr, "02-0\t整数的四则运算\n");
	fprintf(stderr, "02-1\t厘米转换为英尺与英寸\n");
	fprintf(stderr, "02-2\t然后是几点钟\n");
	return 1; // Running come across with certain problems.
}

int main(int argc, char const *argv[])
{

	if (argc == 1) return usage();

	if (strcmp(argv[1], "02-0") == 0) ElementaryArithmetic();
	else if (strcmp(argv[1], "02-1") == 0) LengthConverter();
	else if (strcmp(argv[1], "02-2") == 0) TimeCounter();
	
	else {
		fprintf(stderr, "找不到['%s']题，请确认是否存在于题库中或者等待我更新\n", argv[1]);
		return 1;
	}
	return 0;
}


