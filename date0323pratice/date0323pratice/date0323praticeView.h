
// date0323praticeView.h: Cdate0323praticeView 类的接口
//

#pragma once


class Cdate0323praticeView : public CView
{
protected: // 仅从序列化创建
	Cdate0323praticeView() noexcept;
	DECLARE_DYNCREATE(Cdate0323praticeView)

// 特性
public:
	Cdate0323praticeDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cdate0323praticeView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	CRect cr;

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShownumver();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // date0323praticeView.cpp 中的调试版本
inline Cdate0323praticeDoc* Cdate0323praticeView::GetDocument() const
   { return reinterpret_cast<Cdate0323praticeDoc*>(m_pDocument); }
#endif

