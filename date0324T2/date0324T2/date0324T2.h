﻿
// date0324T2.h: date0324T2 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // 主符号


// Cdate0324T2App:
// 有关此类的实现，请参阅 date0324T2.cpp
//

class Cdate0324T2App : public CWinApp
{
public:
	Cdate0324T2App() noexcept;


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cdate0324T2App theApp;
