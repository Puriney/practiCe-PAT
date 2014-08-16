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

static int usage()
{
	fprintf(stderr, "\n");
	fprintf(stderr, "Usage:    practiCe <题目编号> <参数>\n");
	fprintf(stderr, "题目编号:        02-0        整数的四则运算\n");
	return 1; // Running come across with certain problems.
}

int main(int argc, char const *argv[])
{
	if (argc == 1) return usage();
	if (strcmp(argv[1], "02-0")) {
        fprintf(stderr, "02-0 Puzzle\n");
        ElementaryArithmetic();
    }
	else {
		fprintf(stderr, "[main] unrecognized commad '%s'. Abort!\n", argv[1]);
		return 1;
	}
	return 0;
}


