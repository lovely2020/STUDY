
// date0505T1View.h : Cdate0505T1View 类的接口
//

#pragma once

class Cdate0505T1Set;

class Cdate0505T1View : public CRecordView
{
protected: // 仅从序列化创建
	Cdate0505T1View();
	DECLARE_DYNCREATE(Cdate0505T1View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_DATE0505T1_FORM };
#endif
	Cdate0505T1Set* m_pSet;

// 特性
public:
	Cdate0505T1Doc* GetDocument() const;

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
	virtual ~Cdate0505T1View();
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
	afx_msg void OnEnChangeEdit6();
	CString m_5;
};

#ifndef _DEBUG  // date0505T1View.cpp 中的调试版本
inline Cdate0505T1Doc* Cdate0505T1View::GetDocument() const
   { return reinterpret_cast<Cdate0505T1Doc*>(m_pDocument); }
#endif

