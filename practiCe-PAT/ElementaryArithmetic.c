#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include "ElementaryArithmetic.h"

//输入样例：
//3 2
//输出样例：
//3 + 2 = 5
//3 - 2 = 1
//3 * 2 = 6
//3 / 2 = 1

void ElementaryArithmetic(void){
	fprintf(stderr, "开始解决问题：整数四则运算\n");
	fprintf(stderr, "题源：http://pat.zju.edu.cn/contests/mooc-c/02-0\n"); 

	int a;
	int b;
	scanf("%d", &a);
	scanf("%d", &b);
	
	int c_sum       = a + b;
	int c_substract = a - b;
	int c_product   = a * b;
	int c_divide    = a / b;
	
	printf("%d + %d = %d\n", a, b, c_sum);
	printf("%d - %d = %d\n", a, b, c_substract);
	printf("%d * %d = %d\n", a, b, c_product);
	printf("%d / %d = %d\n", a, b, c_divide);
	
	fprintf(stderr, "问题解决\n");
}