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
	CEdit editv;
	CString editc;
	CEdit resultv;
	CString resultc;
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton10();
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedButton11();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton15();
	afx_msg void OnBnClickedButton16();
	afx_msg void OnBnClickedButton12();
	afx_msg void OnBnClickedButton17();
	afx_msg void OnBnClickedButton13();
	afx_msg void OnBnClickedButton18();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton14();
	afx_msg void OnBnClickedButton19();
	afx_msg void OnBnClickedButton1();
	void SaveFirstValue();
	void Calculator();
	double n1;
	double n2;
	int mFlag;
};
