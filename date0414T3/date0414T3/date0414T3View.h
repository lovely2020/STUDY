
// date0414T3View.h: Cdate0414T3View 类的接口
//

#pragma once


class Cdate0414T3View : public CView
{
protected: // 仅从序列化创建
	Cdate0414T3View() noexcept;
	DECLARE_DYNCREATE(Cdate0414T3View)

// 特性
public:
	Cdate0414T3Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cdate0414T3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnDlg();
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // date0414T3View.cpp 中的调试版本
inline Cdate0414T3Doc* Cdate0414T3View::GetDocument() const
   { return reinterpret_cast<Cdate0414T3Doc*>(m_pDocument); }
#endif

