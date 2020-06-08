
// Exer3View.h : CExer3View 类的接口
//

#pragma once

class CExer3Set;

class CExer3View : public CRecordView
{
protected: // 仅从序列化创建
	CExer3View();
	DECLARE_DYNCREATE(CExer3View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_EXER3_FORM };
#endif
	CExer3Set* m_pSet;

// 特性
public:
	CExer3Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual void OnInitialUpdate(); // 构造后第一次调用

// 实现
public:
	virtual ~CExer3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton1();
	CString m_1;
	CString m_2;
	CString m_3;
	CString m_4;
	CString m_5;
	CString m_6;
	afx_msg void OnBnClickedButton3();
};

#ifndef _DEBUG  // Exer3View.cpp 中的调试版本
inline CExer3Doc* CExer3View::GetDocument() const
   { return reinterpret_cast<CExer3Doc*>(m_pDocument); }
#endif

