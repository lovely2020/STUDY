
// date0511T3View.h : Cdate0511T3View 类的接口
//

#pragma once

class Cdate0511T3Set;

class Cdate0511T3View : public CRecordView
{
protected: // 仅从序列化创建
	Cdate0511T3View();
	DECLARE_DYNCREATE(Cdate0511T3View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_DATE0511T3_FORM };
#endif
	Cdate0511T3Set* m_pSet;

// 特性
public:
	Cdate0511T3Doc* GetDocument() const;

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
	virtual ~Cdate0511T3View();
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
};

#ifndef _DEBUG  // date0511T3View.cpp 中的调试版本
inline Cdate0511T3Doc* Cdate0511T3View::GetDocument() const
   { return reinterpret_cast<Cdate0511T3Doc*>(m_pDocument); }
#endif

