﻿#pragma once


// MyDlg 对话框

class MyDlg : public CDialogEx
{
	DECLARE_DYNAMIC(MyDlg)

public:
	MyDlg(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~MyDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLbnSelchangeList1();
	CListBox Lbox;
	virtual BOOL OnInitDialog();
	CString c;
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	bool flag;
	afx_msg void OnBnClickedButton1();
	int i;
	afx_msg void OnBnClickedOk();
};
