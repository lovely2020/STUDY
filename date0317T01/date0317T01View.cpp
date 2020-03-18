
// date0317T01View.cpp: Cdate0317T01View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "date0317T01.h"
#endif

#include "date0317T01Doc.h"
#include "date0317T01View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cdate0317T01View

IMPLEMENT_DYNCREATE(Cdate0317T01View, CView)

BEGIN_MESSAGE_MAP(Cdate0317T01View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// Cdate0317T01View 构造/析构

Cdate0317T01View::Cdate0317T01View() noexcept
{
	// TODO: 在此处添加构造代码

}

Cdate0317T01View::~Cdate0317T01View()
{
}

BOOL Cdate0317T01View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cdate0317T01View 绘图

void Cdate0317T01View::OnDraw(CDC* /*pDC*/)
{
	Cdate0317T01Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cdate0317T01View 诊断

#ifdef _DEBUG
void Cdate0317T01View::AssertValid() const
{
	CView::AssertValid();
}

void Cdate0317T01View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cdate0317T01Doc* Cdate0317T01View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cdate0317T01Doc)));
	return (Cdate0317T01Doc*)m_pDocument;
}
#endif //_DEBUG


// Cdate0317T01View 消息处理程序


void Cdate0317T01View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cdate0317T01Doc *pDoc = GetDocument();

	CView::OnLButtonDown(nFlags, point);

	pDoc->P1 = point;
}


void Cdate0317T01View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cdate0317T01Doc *pDoc = GetDocument();

	CView::OnLButtonUp(nFlags, point);


	pDoc->P2 = point;
	CString s;

	s.Format(_T("%d"), pDoc->count);

	CClientDC dc(this);
	dc.TextOutW(200, 200, s);
	int c = point.x-pDoc->P1.x;

	int b = c/ pDoc->count;

	CString t;

	t.Format(_T("%d"), b);

	dc.TextOutW(300, 300, t);


	
	
}


void Cdate0317T01View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cdate0317T01Doc *pDoc = GetDocument();
	pDoc->count++;

	CView::OnMouseMove(nFlags, point);
}
