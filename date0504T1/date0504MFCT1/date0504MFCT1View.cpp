
// date0504MFCT1View.cpp: Cdate0504MFCT1View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "date0504MFCT1.h"
#endif

#include "date0504MFCT1Doc.h"
#include "date0504MFCT1View.h"
#include  "W32.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cdate0504MFCT1View

IMPLEMENT_DYNCREATE(Cdate0504MFCT1View, CView)

BEGIN_MESSAGE_MAP(Cdate0504MFCT1View, CView)
END_MESSAGE_MAP()

// Cdate0504MFCT1View 构造/析构

Cdate0504MFCT1View::Cdate0504MFCT1View() noexcept
{
	// TODO: 在此处添加构造代码

}

Cdate0504MFCT1View::~Cdate0504MFCT1View()
{
}

BOOL Cdate0504MFCT1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cdate0504MFCT1View 绘图

void Cdate0504MFCT1View::OnDraw(CDC* pDC)
{
	Cdate0504MFCT1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	F1 f = F1();
	int a = f.factorial(5);

	CString s;
	s.Format(_T("%d"),a);

	pDC->TextOutW(200, 200, s);




	// TODO: 在此处为本机数据添加绘制代码
}


// Cdate0504MFCT1View 诊断

#ifdef _DEBUG
void Cdate0504MFCT1View::AssertValid() const
{
	CView::AssertValid();
}

void Cdate0504MFCT1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cdate0504MFCT1Doc* Cdate0504MFCT1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cdate0504MFCT1Doc)));
	return (Cdate0504MFCT1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cdate0504MFCT1View 消息处理程序
