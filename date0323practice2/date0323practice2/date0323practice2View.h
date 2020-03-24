
// date0323practice2View.h: Cdate0323practice2View 类的接口
//

#pragma once


class Cdate0323practice2View : public CView
{
protected: // 仅从序列化创建
	Cdate0323practice2View() noexcept;
	DECLARE_DYNCREATE(Cdate0323practice2View)

// 特性
public:
	Cdate0323practice2Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cdate0323practice2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	CRect cr;
	int x = 0;
	int y = 0;
	int z = 0;


protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnCircle();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // date0323practice2View.cpp 中的调试版本
inline Cdate0323practice2Doc* Cdate0323practice2View::GetDocument() const
   { return reinterpret_cast<Cdate0323practice2Doc*>(m_pDocument); }
#endif

