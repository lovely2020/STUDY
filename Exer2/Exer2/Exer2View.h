
// Exer2View.h : CExer2View 类的接口
//

#pragma once

class CExer2Set;

class CExer2View : public CRecordView
{
protected: // 仅从序列化创建
	CExer2View();
	DECLARE_DYNCREATE(CExer2View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_EXER2_FORM };
#endif
	CExer2Set* m_pSet;
	CString path;

// 特性
public:
	CExer2Doc* GetDocument() const;

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
	virtual ~CExer2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit7();
	CString m_1;
	CString m_2;
	CString m_3;
	CString m_4;
	CString m_5;
	CString m_6;
	CString m_7;
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	void DrawPic(CString file);
	afx_msg void OnBnClickedButton1();
	afx_msg void OnPaint();
};

#ifndef _DEBUG  // Exer2View.cpp 中的调试版本
inline CExer2Doc* CExer2View::GetDocument() const
   { return reinterpret_cast<CExer2Doc*>(m_pDocument); }
#endif

