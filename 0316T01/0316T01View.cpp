
// 0316T01View.cpp: CMy0316T01View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "0316T01.h"
#endif

#include "0316T01Doc.h"
#include "0316T01View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0316T01View

IMPLEMENT_DYNCREATE(CMy0316T01View, CView)

BEGIN_MESSAGE_MAP(CMy0316T01View, CView)
END_MESSAGE_MAP()

// CMy0316T01View 构造/析构

CMy0316T01View::CMy0316T01View() noexcept
{
	// TODO: 在此处添加构造代码

}

CMy0316T01View::~CMy0316T01View()
{
}

BOOL CMy0316T01View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy0316T01View 绘图

void CMy0316T01View::OnDraw(CDC* /*pDC*/)
{
	CMy0316T01Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy0316T01View 诊断

#ifdef _DEBUG
void CMy0316T01View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0316T01View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0316T01Doc* CMy0316T01View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0316T01Doc)));
	return (CMy0316T01Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0316T01View 消息处理程序
