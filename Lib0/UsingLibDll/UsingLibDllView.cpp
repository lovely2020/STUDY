﻿
// UsingLibDllView.cpp: CUsingLibDllView 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "UsingLibDll.h"
#endif

#include "UsingLibDllDoc.h"
#include "UsingLibDllView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include"w32.h"
#include"W32D.h"


// CUsingLibDllView

IMPLEMENT_DYNCREATE(CUsingLibDllView, CView)

BEGIN_MESSAGE_MAP(CUsingLibDllView, CView)
END_MESSAGE_MAP()

// CUsingLibDllView 构造/析构

CUsingLibDllView::CUsingLibDllView() noexcept
{
	// TODO: 在此处添加构造代码

}

CUsingLibDllView::~CUsingLibDllView()
{
}

BOOL CUsingLibDllView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CUsingLibDllView 绘图

void CUsingLibDllView::OnDraw(CDC* pDC)
{
	CUsingLibDllDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	CString s;
	s = CString(pchar());
	pDC->TextOutW(200, 150, s);

	CString ss;
	ss.Format(_T("%d,这是从动态库返回的值"),GetInt());
	pDC->TextOutW(200, 180, ss);

	// TODO: 在此处为本机数据添加绘制代码
}


// CUsingLibDllView 诊断

#ifdef _DEBUG
void CUsingLibDllView::AssertValid() const
{
	CView::AssertValid();
}

void CUsingLibDllView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CUsingLibDllDoc* CUsingLibDllView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CUsingLibDllDoc)));
	return (CUsingLibDllDoc*)m_pDocument;
}
#endif //_DEBUG


// CUsingLibDllView 消息处理程序
