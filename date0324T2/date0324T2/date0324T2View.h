
// date0324T2View.h: Cdate0324T2View 类的接口
//

#pragma once


class Cdate0324T2View : public CView
{
protected: // 仅从序列化创建
	Cdate0324T2View() noexcept;
	DECLARE_DYNCREATE(Cdate0324T2View)

// 特性
public:
	Cdate0324T2Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cdate0324T2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	CBitmap m_Bitmap;
	int width;
	int height;
};

#ifndef _DEBUG  // date0324T2View.cpp 中的调试版本
inline Cdate0324T2Doc* Cdate0324T2View::GetDocument() const
   { return reinterpret_cast<Cdate0324T2Doc*>(m_pDocument); }
#endif

