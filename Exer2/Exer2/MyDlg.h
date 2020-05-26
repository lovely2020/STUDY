#pragma once
#include "Exer2Set.h"

// MyDlg 对话框

class MyDlg : public CDialog
{
	DECLARE_DYNAMIC(MyDlg)

public:
	MyDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~MyDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif
	CString path;
	CExer2Set* m_pSet;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	void DrawPic(CString file);

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
	CString filename;
};
