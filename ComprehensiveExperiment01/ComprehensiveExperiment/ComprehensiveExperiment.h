
// ComprehensiveExperiment.h : ComprehensiveExperiment Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CComprehensiveExperimentApp:
// �йش����ʵ�֣������ ComprehensiveExperiment.cpp
//

class CComprehensiveExperimentApp : public CWinApp
{
public:
	CComprehensiveExperimentApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CComprehensiveExperimentApp theApp;
