
// date0323practice2View.cpp: Cdate0323practice2View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "date0323practice2.h"
#endif

#include "date0323practice2Doc.h"
#include "date0323practice2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cdate0323practice2View

IMPLEMENT_DYNCREATE(Cdate0323practice2View, CView)

BEGIN_MESSAGE_MAP(Cdate0323practice2View, CView)
	ON_WM_SIZE()
	ON_COMMAND(ID_Circle, &Cdate0323practice2View::OnCircle)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// Cdate0323practice2View 构造/析构

Cdate0323practice2View::Cdate0323practice2View() noexcept
{
	// TODO: 在此处添加构造代码

}

Cdate0323practice2View::~Cdate0323practice2View()
{
}

BOOL Cdate0323practice2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cdate0323practice2View 绘图

void Cdate0323practice2View::OnDraw(CDC* pDC)
{
	Cdate0323practice2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	SetTimer(0, 500, NULL);
	CBrush brush((RGB(x, y, z)));
	CBrush *oldbrush = pDC->SelectObject(&brush);
	if (pDoc->set)
	{
		pDC->Ellipse(cr);
		pDC->SelectObject(oldbrush);
	}

	// TODO: 在此处为本机数据添加绘制代码
}


// Cdate0323practice2View 诊断

#ifdef _DEBUG
void Cdate0323practice2View::AssertValid() const
{
	CView::AssertValid();
}

void Cdate0323practice2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cdate0323practice2Doc* Cdate0323practice2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cdate0323practice2Doc)));
	return (Cdate0323practice2Doc*)m_pDocument;
}
#endif //_DEBUG


// Cdate0323practice2View 消息处理程序


void Cdate0323practice2View::OnSize(UINT nType, int cx, int cy)
{
	CView::OnSize(nType, cx, cy);

	Cdate0323practice2Doc *pDoc = GetDocument();
	pDoc->px = cx;
	pDoc->py = cy;
	// TODO: 在此处添加消息处理程序代码
}


void Cdate0323practice2View::OnCircle()
{
	// TODO: 在此添加命令处理程序代码
	

	Cdate0323practice2Doc *pDoc = GetDocument();
	cr.top = 0;
	cr.left = abs(pDoc->px / 2 - pDoc->py / 2);
	cr.right = pDoc->px / 2 + pDoc->py / 2;
	cr.bottom = pDoc->py;
	pDoc->set = true;


	CClientDC dc(this);



	dc.Ellipse(cr);

}



void Cdate0323practice2View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CView::OnTimer(nIDEvent);

	if (cr.top < cr.bottom)
	{

		cr.top += 10;
		cr.bottom -= 10;
		cr.right -= 10;
		cr.left += 10;
		x += 10;
		y += 10;
		z += 10;
		Invalidate();
	}
	CView::OnTimer(nIDEvent);

}
