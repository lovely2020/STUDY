
// ComprehensiveExperimentView.h : CComprehensiveExperimentView 类的接口
//

#pragma once

class CComprehensiveExperimentSet;

class CComprehensiveExperimentView : public CRecordView
{
protected: // 仅从序列化创建
	CComprehensiveExperimentView();
	DECLARE_DYNCREATE(CComprehensiveExperimentView)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_COMPREHENSIVEEXPERIMENT_FORM };
#endif
	CComprehensiveExperimentSet* m_pSet;
	CString path;

// 特性
public:
	CComprehensiveExperimentDoc* GetDocument() const;

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
	virtual ~CComprehensiveExperimentView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnInformation();
	CString m_1;
	CString m_2;
	CString m_3;
	CString m_4;
	CString m_5;
	CString m_6;
	CString m_7;
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	afx_msg void OnRecordFirst();
	void DrawPic(CString file);
};

#ifndef _DEBUG  // ComprehensiveExperimentView.cpp 中的调试版本
inline CComprehensiveExperimentDoc* CComprehensiveExperimentView::GetDocument() const
   { return reinterpret_cast<CComprehensiveExperimentDoc*>(m_pDocument); }
#endif

