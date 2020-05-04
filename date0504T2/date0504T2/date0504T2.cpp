// date0504T2.cpp : 定义 DLL 的导出函数。
//

#include "pch.h"
#include "framework.h"
#include "date0504T2.h"


// 这是导出变量的一个示例
DATE0504T2_API int ndate0504T2=0;

// 这是导出函数的一个示例。
DATE0504T2_API int fndate0504T2(void)
{
    return 0;
}

DATE0504T2_API int factorial(int n)
{
	if (n > 10)
		return 10000;
	else if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else return n * factorial(n - 1);
}

// 这是已导出类的构造函数。
Cdate0504T2::Cdate0504T2()
{
    return;
}
