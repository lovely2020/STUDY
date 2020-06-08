
// Exer3View.cpp : CExer3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Exer3.h"
#endif

#include "Exer3Set.h"
#include "Exer3Doc.h"
#include "Exer3View.h"
#include "ADDDLG.h"

#include "ADDUPDATA.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CExer3View

IMPLEMENT_DYNCREATE(CExer3View, CRecordView)

BEGIN_MESSAGE_MAP(CExer3View, CRecordView)
	ON_BN_CLICKED(IDC_BUTTON2, &CExer3View::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON1, &CExer3View::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON3, &CExer3View::OnBnClickedButton3)
END_MESSAGE_MAP()

// CExer3View 构造/析构

CExer3View::CExer3View()
	: CRecordView(IDD_EXER3_FORM)
	, m_1(_T(""))
	, m_2(_T(""))
	, m_3(_T(""))
	, m_4(_T(""))
	, m_5(_T(""))
	, m_6(_T(""))
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码

}

CExer3View::~CExer3View()
{
}

void CExer3View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_1);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_2);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->m_3);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->m_4);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->m_5);
	DDX_Text(pDX, IDC_EDIT6, m_pSet->m_6);
}

BOOL CExer3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void CExer3View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_Exer3Set;
	CRecordView::OnInitialUpdate();

}


// CExer3View 诊断

#ifdef _DEBUG
void CExer3View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CExer3View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CExer3Doc* CExer3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CExer3Doc)));
	return (CExer3Doc*)m_pDocument;
}
#endif //_DEBUG


// CExer3View 数据库支持
CRecordset* CExer3View::OnGetRecordset()
{
	return m_pSet;
}



// CExer3View 消息处理程序


void CExer3View::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	ADDDLG add;
	int r = add.DoModal();
	if(r==IDOK)
	{
			CString ii = add.m;
			m_pSet->AddNew();
			m_pSet->m_1 = ii;
			m_pSet->Update();
			UpdateData(false);
	}
}


void CExer3View::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	ADDUPDATA add;
	int r = add.DoModal();
	if (r == IDOK)
	{
		CString ii = add.m_1;
		m_pSet->Edit();
		m_pSet->m_1 = ii;
		m_pSet->Update();
		UpdateData(false);
	}
}


void CExer3View::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	m_pSet->Delete();
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);
}
