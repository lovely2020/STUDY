
// date0511T01View.cpp : Cdate0511T01View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "date0511T01.h"
#endif

#include "date0511T01Set.h"
#include "date0511T01Doc.h"
#include "date0511T01View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cdate0511T01View

IMPLEMENT_DYNCREATE(Cdate0511T01View, CRecordView)

BEGIN_MESSAGE_MAP(Cdate0511T01View, CRecordView)
	//ON_BN_CLICKED(IDC_BUTTON1, &Cdate0511T01View::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &Cdate0511T01View::OnBnClickedButton2)
END_MESSAGE_MAP()

// Cdate0511T01View 构造/析构

Cdate0511T01View::Cdate0511T01View()
	: CRecordView(IDD_DATE0511T01_FORM)
	, ID(0)
	, m_1(_T(""))
	, m_2(_T(""))
	, m_3(_T(""))
	, m_4(_T(""))
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码

}

Cdate0511T01View::~Cdate0511T01View()
{
}

void Cdate0511T01View::DoDataExchange(CDataExchange* pDX)
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
}

BOOL Cdate0511T01View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void Cdate0511T01View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_date0511T01Set;
	CRecordView::OnInitialUpdate();

}


// Cdate0511T01View 诊断

#ifdef _DEBUG
void Cdate0511T01View::AssertValid() const
{
	CRecordView::AssertValid();
}

void Cdate0511T01View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

Cdate0511T01Doc* Cdate0511T01View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cdate0511T01Doc)));
	return (Cdate0511T01Doc*)m_pDocument;
}
#endif //_DEBUG


// Cdate0511T01View 数据库支持
CRecordset* Cdate0511T01View::OnGetRecordset()
{
	return m_pSet;
}



// Cdate0511T01View 消息处理程序


void Cdate0511T01View::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	//m_pSet->Update();
}


void Cdate0511T01View::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码

	
	CRect rect;
	CString s;
	s = m_pSet->m_5;//从记录集当前记录，读取第2个字段值，放入s中 
	CDC *pDC = GetDlgItem(IDC_STATIC)->GetDC();
	//pDC->TextOutW(200, 200, s);
	CWnd *pWnd = GetDlgItem(IDC_STATIC);//获得picture控件窗口句柄
	pWnd->GetClientRect(&rect);//获取picture控件所在的矩形区域

	
	CImage img;
	img.Load(s);
	img.Draw(pDC->m_hDC,0,0,rect.right-rect.left,rect.bottom-rect.top);

	
	
}
