
// date0505T1.h : date0505T1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cdate0505T1App:
// �йش����ʵ�֣������ date0505T1.cpp
//

class Cdate0505T1App : public CWinApp
{
public:
	Cdate0505T1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cdate0505T1App theApp;
