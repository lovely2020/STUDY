// date0504T02.cpp : 定义 DLL 的导出函数。
//

#include "pch.h"
#include "framework.h"
#include "date0504T02.h"


// 这是导出变量的一个示例
DATE0504T02_API int ndate0504T02=0;

// 这是导出函数的一个示例。
DATE0504T02_API int fndate0504T02(void)
{
    return 0;
}

DATE0504T02_API float convert(float deg)
{
	float rad;
	rad = deg / 180;
	return rad;
}

// 这是已导出类的构造函数。
Cdate0504T02::Cdate0504T02()
{
    return;
}
