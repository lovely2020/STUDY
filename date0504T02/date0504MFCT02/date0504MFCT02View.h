﻿
// date0504MFCT02View.h: Cdate0504MFCT02View 类的接口
//

#pragma once


class Cdate0504MFCT02View : public CView
{
protected: // 仅从序列化创建
	Cdate0504MFCT02View() noexcept;
	DECLARE_DYNCREATE(Cdate0504MFCT02View)

// 特性
public:
	Cdate0504MFCT02Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cdate0504MFCT02View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // date0504MFCT02View.cpp 中的调试版本
inline Cdate0504MFCT02Doc* Cdate0504MFCT02View::GetDocument() const
   { return reinterpret_cast<Cdate0504MFCT02Doc*>(m_pDocument); }
#endif

