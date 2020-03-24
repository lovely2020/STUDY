
// date0323pratice.h: date0323pratice 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // 主符号


// Cdate0323praticeApp:
// 有关此类的实现，请参阅 date0323pratice.cpp
//

class Cdate0323praticeApp : public CWinApp
{
public:
	Cdate0323praticeApp() noexcept;


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cdate0323praticeApp theApp;
