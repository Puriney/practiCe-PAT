//
//  DescriptBCD.c
//  practiCe-PAT
//
//  Created by Yun Yan on 8/18/14.
//  Copyright (c) 2014 Yun Yan. All rights reserved.
//

#include <stdio.h>
#include "DescriptBCD.h"

void DescriptBCD(void){
	int n_decimal = 0;
	
	fprintf(stderr, "开始解答：BCD解密\n\n");
	fprintf(stderr, "BCD原理：\n" \
		   "十进制\t二进制\t十六进制\tBCD进制\n" \
		   "18\t10010\t0x12\t12\n" \
		   "10010补齐到8bit为00010010\n" \
		   "前4bits：0001，转换为10进制即1\n" \
		   "后4bits：0010，转换为10进制即2\n" \
		   "得到12，即BCD数\n" \
		   "而12正是16进制的表现形式\n");
	
	printf("请小明你输入[0, 153]范围内的整数\n");
	scanf("%d", &n_decimal);

	printf("转换为BCD后的结果是：\n");
	printf("%x", n_decimal);

}