
// date0505T1View.cpp : Cdate0505T1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "date0505T1.h"
#endif

#include "date0505T1Set.h"
#include "date0505T1Doc.h"
#include "date0505T1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cdate0505T1View

IMPLEMENT_DYNCREATE(Cdate0505T1View, CRecordView)

BEGIN_MESSAGE_MAP(Cdate0505T1View, CRecordView)
	//ON_EN_CHANGE(IDC_EDIT6, &Cdate0505T1View::OnEnChangeEdit6)
END_MESSAGE_MAP()

// Cdate0505T1View 构造/析构

Cdate0505T1View::Cdate0505T1View()
	: CRecordView(IDD_DATE0505T1_FORM)
	, m_1(_T(""))
	, m_2(_T(""))
	, m_3(_T(""))
	, m_4(_T(""))
	, m_5(_T(""))
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码

}

Cdate0505T1View::~Cdate0505T1View()
{
}

void Cdate0505T1View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_ID);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->m_1);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_2);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->m_3);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->m_4);
	DDX_Text(pDX, IDC_EDIT6, m_pSet->m_5);
}

BOOL Cdate0505T1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void Cdate0505T1View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_date0505T1Set;
	CRecordView::OnInitialUpdate();

}


// Cdate0505T1View 诊断

#ifdef _DEBUG
void Cdate0505T1View::AssertValid() const
{
	CRecordView::AssertValid();
}

void Cdate0505T1View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

Cdate0505T1Doc* Cdate0505T1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cdate0505T1Doc)));
	return (Cdate0505T1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cdate0505T1View 数据库支持
CRecordset* Cdate0505T1View::OnGetRecordset()
{
	return m_pSet;
}



// Cdate0505T1View 消息处理程序


void Cdate0505T1View::OnEnChangeEdit6()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CRecordView::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}
