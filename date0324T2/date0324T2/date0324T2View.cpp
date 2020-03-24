
// date0324T2View.cpp: Cdate0324T2View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "date0324T2.h"
#endif

#include "date0324T2Doc.h"
#include "date0324T2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cdate0324T2View

IMPLEMENT_DYNCREATE(Cdate0324T2View, CView)

BEGIN_MESSAGE_MAP(Cdate0324T2View, CView)
END_MESSAGE_MAP()

// Cdate0324T2View 构造/析构

Cdate0324T2View::Cdate0324T2View() noexcept
{
	// TODO: 在此处添加构造代码
	BITMAP BM;
	m_Bitmap.LoadBitmap(IDB_BITMAP1);
	m_Bitmap.GetBitmap(&BM);
	width = BM.bmWidth;
	height = BM.bmHeight;


}

Cdate0324T2View::~Cdate0324T2View()
{
}

BOOL Cdate0324T2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cdate0324T2View 绘图

void Cdate0324T2View::OnDraw(CDC* pDC)
{
	Cdate0324T2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	CDC MemDC;
	MemDC.CreateCompatibleDC(NULL);
	MemDC.SelectObject(m_Bitmap);
	pDC->BitBlt(0, 0, width, height, &MemDC, 0, 0, SRCCOPY);
	// TODO: 在此处为本机数据添加绘制代码
}


// Cdate0324T2View 诊断

#ifdef _DEBUG
void Cdate0324T2View::AssertValid() const
{
	CView::AssertValid();
}

void Cdate0324T2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cdate0324T2Doc* Cdate0324T2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cdate0324T2Doc)));
	return (Cdate0324T2Doc*)m_pDocument;
}
#endif //_DEBUG


// Cdate0324T2View 消息处理程序
