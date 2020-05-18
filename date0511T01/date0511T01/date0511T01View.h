
// date0511T01View.h : Cdate0511T01View 类的接口
//

#pragma once

class Cdate0511T01Set;

class Cdate0511T01View : public CRecordView
{
protected: // 仅从序列化创建
	Cdate0511T01View();
	DECLARE_DYNCREATE(Cdate0511T01View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_DATE0511T01_FORM };
#endif
	Cdate0511T01Set* m_pSet;

// 特性
public:
	Cdate0511T01Doc* GetDocument() const;

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
	virtual ~Cdate0511T01View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	long ID;
	CString m_1;
	CString m_2;
	CString m_3;
	CString m_4;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
};

#ifndef _DEBUG  // date0511T01View.cpp 中的调试版本
inline Cdate0511T01Doc* Cdate0511T01View::GetDocument() const
   { return reinterpret_cast<Cdate0511T01Doc*>(m_pDocument); }
#endif

