﻿
// date0331T3View.cpp: Cdate0331T3View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "date0331T3.h"
#endif

#include "date0331T3Doc.h"
#include "date0331T3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cdate0331T3View

IMPLEMENT_DYNCREATE(Cdate0331T3View, CView)

BEGIN_MESSAGE_MAP(Cdate0331T3View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_CHAR()
END_MESSAGE_MAP()

// Cdate0331T3View 构造/析构

Cdate0331T3View::Cdate0331T3View() noexcept
{
	// TODO: 在此处添加构造代码

}

Cdate0331T3View::~Cdate0331T3View()
{
}

BOOL Cdate0331T3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cdate0331T3View 绘图

void Cdate0331T3View::OnDraw(CDC* /*pDC*/)
{
	Cdate0331T3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cdate0331T3View 诊断

#ifdef _DEBUG
void Cdate0331T3View::AssertValid() const
{
	CView::AssertValid();
}

void Cdate0331T3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cdate0331T3Doc* Cdate0331T3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cdate0331T3Doc)));
	return (Cdate0331T3Doc*)m_pDocument;
}
#endif //_DEBUG


// Cdate0331T3View 消息处理程序


void Cdate0331T3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cdate0331T3Doc *pDoc = GetDocument();
	pDoc->P1 = point;
	CView::OnLButtonDown(nFlags, point);
}


void Cdate0331T3View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cdate0331T3Doc *pDoc = GetDocument();
	pDoc->P2 = point;

	CClientDC dc(this);
	dc.Rectangle(pDoc->P1.x, pDoc->P1.y, pDoc->P2.x, pDoc->P2.y);

	CView::OnLButtonUp(nFlags, point);
}


void Cdate0331T3View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cdate0331T3Doc *pDoc = GetDocument();
	CClientDC dc(this);

	CString s;
	s += (wchar_t)nChar;;

	


	if (pDoc->P1.x + pDoc->a < pDoc->P2.x)
	{
		dc.TextOutW(pDoc->P1.x + pDoc->a, pDoc->P1.y+pDoc->b, s);
		pDoc->a = pDoc->a + 15;
	}
	else
	{
		pDoc->b = pDoc->b + 20;
		pDoc->a = 10;
		dc.TextOutW(pDoc->P1.x + pDoc->a, pDoc->P1.y + pDoc->b, s);
	}
		
	
	CView::OnChar(nChar, nRepCnt, nFlags);
}
