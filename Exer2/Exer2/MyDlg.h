#pragma once
#include "Exer2Set.h"

// MyDlg �Ի���

class MyDlg : public CDialog
{
	DECLARE_DYNAMIC(MyDlg)

public:
	MyDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~MyDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif
	CString path;
	CExer2Set* m_pSet;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	void DrawPic(CString file);

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
	CString filename;
};
