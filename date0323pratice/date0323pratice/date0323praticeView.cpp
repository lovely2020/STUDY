
// date0323praticeView.cpp: Cdate0323praticeView 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "date0323pratice.h"
#endif

#include "date0323praticeDoc.h"
#include "date0323praticeView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cdate0323praticeView

IMPLEMENT_DYNCREATE(Cdate0323praticeView, CView)

BEGIN_MESSAGE_MAP(Cdate0323praticeView, CView)
	ON_COMMAND(ID_SHOWNUMVER, &Cdate0323praticeView::OnShownumver)
	ON_WM_SIZE()
	ON_WM_TIMER()
END_MESSAGE_MAP()

// Cdate0323praticeView 构造/析构

Cdate0323praticeView::Cdate0323praticeView() noexcept
{
	// TODO: 在此处添加构造代码

}

Cdate0323praticeView::~Cdate0323praticeView()
{
}

BOOL Cdate0323praticeView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cdate0323praticeView 绘图

void Cdate0323praticeView::OnDraw(CDC* pDC)
{
	Cdate0323praticeDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	SetTimer(0, 500, NULL);
	if (pDoc->set)
	{
		pDC->Ellipse(cr);
	}
	

	// TODO: 在此处为本机数据添加绘制代码
}


// Cdate0323praticeView 诊断

#ifdef _DEBUG
void Cdate0323praticeView::AssertValid() const
{
	CView::AssertValid();
}

void Cdate0323praticeView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cdate0323praticeDoc* Cdate0323praticeView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cdate0323praticeDoc)));
	return (Cdate0323praticeDoc*)m_pDocument;
}
#endif //_DEBUG


// Cdate0323praticeView 消息处理程序


void Cdate0323praticeView::OnShownumver()
{
	// TODO: 在此添加命令处理程序代码
	
	Cdate0323praticeDoc *pDoc = GetDocument();
	cr.top = 0;
	cr.left =abs(pDoc->px/2- pDoc->py/2);
	cr.right = pDoc->px/2+ pDoc->py / 2;
	cr.bottom = pDoc->py;
	pDoc->set = true;
	

    CClientDC dc(this);
	

	
	dc.Ellipse(cr);
	
	
		
		
	

	
}


void Cdate0323praticeView::OnSize(UINT nType, int cx, int cy)
{
	CView::OnSize(nType, cx, cy);

	// TODO: 在此处添加消息处理程序代码
	Cdate0323praticeDoc *pDoc = GetDocument();
	pDoc->px = cx;
	pDoc->py = cy;

}


void Cdate0323praticeView::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	if (cr.top < cr.bottom)
	{

		cr.top += 10;
		cr.bottom -= 10;
		cr.right -= 10;
		cr.left += 10;
		Invalidate();
	}
	
	CView::OnTimer(nIDEvent);

}
