
// date0511T3.h : date0511T3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cdate0511T3App:
// �йش����ʵ�֣������ date0511T3.cpp
//

class Cdate0511T3App : public CWinApp
{
public:
	Cdate0511T3App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cdate0511T3App theApp;
