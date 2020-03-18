
// 0317T3View.cpp: CMy0317T3View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "0317T3.h"
#endif

#include "0317T3Doc.h"
#include "0317T3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0317T3View

IMPLEMENT_DYNCREATE(CMy0317T3View, CView)

BEGIN_MESSAGE_MAP(CMy0317T3View, CView)
	ON_WM_TIMER()
	ON_WM_LBUTTONDOWN()
	ON_WM_SIZE()
END_MESSAGE_MAP()

// CMy0317T3View 构造/析构

CMy0317T3View::CMy0317T3View() noexcept
{
	// TODO: 在此处添加构造代码
	


}

CMy0317T3View::~CMy0317T3View()
{
}

BOOL CMy0317T3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy0317T3View 绘图

void CMy0317T3View::OnDraw(CDC* pDC)
{
	CMy0317T3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
	if (pDoc->set)
	{
		SetTimer(0, 500, NULL);
		pDoc->set = false;
	}

	
	pDC->Ellipse(pDoc->cr);

	
	


	// TODO: 在此处为本机数据添加绘制代码
}


// CMy0317T3View 诊断

#ifdef _DEBUG
void CMy0317T3View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0317T3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0317T3Doc* CMy0317T3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0317T3Doc)));
	return (CMy0317T3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0317T3View 消息处理程序


void CMy0317T3View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CMy0317T3Doc *pDoc = GetDocument();

	if (pDoc->y1<pDoc->cy)
	{
		pDoc->cr.top += 50;
		pDoc->cr.bottom += 50;
		Invalidate();
		if (pDoc->cr.bottom > pDoc->cy)
			pDoc->y1 = pDoc->y2;
	}
	else if (pDoc->y1 >=pDoc->cy)
	{
		{
			pDoc->cr.top -= 50;
			pDoc->cr.bottom -= 50;
			Invalidate();
			if (pDoc->cr.top < 0)
				pDoc->y1 = 100;
		}
	}


	CView::OnTimer(nIDEvent);
}




void CMy0317T3View::OnSize(UINT nType, int cx, int cy)
{
	CView::OnSize(nType, cx, cy);
	CMy0317T3Doc *pDoc = GetDocument();
	// TODO: 在此处添加消息处理程序代码
	pDoc->cy = cy;
	pDoc->y2 = cy;
}
