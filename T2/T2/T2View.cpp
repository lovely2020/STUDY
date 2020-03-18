
// T2View.cpp: CT2View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "T2.h"
#endif

#include "T2Doc.h"
#include "T2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CT2View

IMPLEMENT_DYNCREATE(CT2View, CView)

BEGIN_MESSAGE_MAP(CT2View, CView)
	ON_WM_KEYDOWN()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CT2View 构造/析构

CT2View::CT2View() noexcept
{
	// TODO: 在此处添加构造代码

}

CT2View::~CT2View()
{
}

BOOL CT2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CT2View 绘图

void CT2View::OnDraw(CDC* pDC)
{
	CT2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	pDC->Rectangle(pDoc->tagRec);

	

	// TODO: 在此处为本机数据添加绘制代码
}


// CT2View 诊断

#ifdef _DEBUG
void CT2View::AssertValid() const
{
	CView::AssertValid();
}

void CT2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CT2Doc* CT2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CT2Doc)));
	return (CT2Doc*)m_pDocument;
}
#endif //_DEBUG


// CT2View 消息处理程序


void CT2View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CT2Doc *pDoc = GetDocument();
	if (VK_RETURN)
	{
		pDoc->tagRec.bottom = pDoc->tagRec.bottom - 10;
		pDoc->tagRec.right = pDoc->tagRec.right - 10;

	}
	else if (VK_HOME)
	{
		pDoc->tagRec.top = pDoc->tagRec.top - 10;
		pDoc->tagRec.left = pDoc->tagRec.left - 10;
	}
	InvalidateRect(NULL, TRUE);

	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}


void CT2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CT2Doc *pDoc = GetDocument();
	pDoc->tagRec.left = 200;
	pDoc->tagRec.top = 200;
	pDoc->tagRec.right = 500;
	pDoc->tagRec.bottom = 500;
	InvalidateRect(NULL, TRUE);

	CView::OnLButtonDown(nFlags, point);
}
