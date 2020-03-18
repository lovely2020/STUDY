﻿
// T2View.h: CT2View 类的接口
//

#pragma once


class CT2View : public CView
{
protected: // 仅从序列化创建
	CT2View() noexcept;
	DECLARE_DYNCREATE(CT2View)

// 特性
public:
	CT2Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CT2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // T2View.cpp 中的调试版本
inline CT2Doc* CT2View::GetDocument() const
   { return reinterpret_cast<CT2Doc*>(m_pDocument); }
#endif

