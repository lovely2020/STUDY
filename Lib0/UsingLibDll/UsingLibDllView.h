﻿
// UsingLibDllView.h: CUsingLibDllView 类的接口
//

#pragma once


class CUsingLibDllView : public CView
{
protected: // 仅从序列化创建
	CUsingLibDllView() noexcept;
	DECLARE_DYNCREATE(CUsingLibDllView)

// 特性
public:
	CUsingLibDllDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CUsingLibDllView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // UsingLibDllView.cpp 中的调试版本
inline CUsingLibDllDoc* CUsingLibDllView::GetDocument() const
   { return reinterpret_cast<CUsingLibDllDoc*>(m_pDocument); }
#endif

