
// date0504MFCT2View.cpp: Cdate0504MFCT2View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "date0504MFCT2.h"
#endif

#include "date0504MFCT2Doc.h"
#include "date0504MFCT2View.h"
#include "date0504T2.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cdate0504MFCT2View

IMPLEMENT_DYNCREATE(Cdate0504MFCT2View, CView)

BEGIN_MESSAGE_MAP(Cdate0504MFCT2View, CView)
END_MESSAGE_MAP()

// Cdate0504MFCT2View 构造/析构

Cdate0504MFCT2View::Cdate0504MFCT2View() noexcept
{
	// TODO: 在此处添加构造代码

}

Cdate0504MFCT2View::~Cdate0504MFCT2View()
{
}

BOOL Cdate0504MFCT2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cdate0504MFCT2View 绘图

void Cdate0504MFCT2View::OnDraw(CDC* pDC)
{
	Cdate0504MFCT2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	CString s;
	s.Format(_T("%d"), factorial(5));

	pDC->TextOutW(200, 200, s);



	// TODO: 在此处为本机数据添加绘制代码
}


// Cdate0504MFCT2View 诊断

#ifdef _DEBUG
void Cdate0504MFCT2View::AssertValid() const
{
	CView::AssertValid();
}

void Cdate0504MFCT2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cdate0504MFCT2Doc* Cdate0504MFCT2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cdate0504MFCT2Doc)));
	return (Cdate0504MFCT2Doc*)m_pDocument;
}
#endif //_DEBUG


// Cdate0504MFCT2View 消息处理程序
