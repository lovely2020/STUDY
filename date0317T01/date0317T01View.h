﻿
// date0317T01View.h: Cdate0317T01View 类的接口
//

#pragma once


class Cdate0317T01View : public CView
{
protected: // 仅从序列化创建
	Cdate0317T01View() noexcept;
	DECLARE_DYNCREATE(Cdate0317T01View)

// 特性
public:
	Cdate0317T01Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cdate0317T01View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // date0317T01View.cpp 中的调试版本
inline Cdate0317T01Doc* Cdate0317T01View::GetDocument() const
   { return reinterpret_cast<Cdate0317T01Doc*>(m_pDocument); }
#endif

