
// ComprehensiveExperimentView.cpp : CComprehensiveExperimentView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "ComprehensiveExperiment.h"
#endif

#include "ComprehensiveExperimentSet.h"
#include "ComprehensiveExperimentDoc.h"
#include "ComprehensiveExperimentView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CComprehensiveExperimentView

IMPLEMENT_DYNCREATE(CComprehensiveExperimentView, CRecordView)

BEGIN_MESSAGE_MAP(CComprehensiveExperimentView, CRecordView)
	ON_COMMAND(ID_Information, &CComprehensiveExperimentView::OnInformation)
	ON_COMMAND(ID_RECORD_PREV, &CComprehensiveExperimentView::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &CComprehensiveExperimentView::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &CComprehensiveExperimentView::OnRecordLast)
	ON_COMMAND(ID_RECORD_FIRST, &CComprehensiveExperimentView::OnRecordFirst)
END_MESSAGE_MAP()

// CComprehensiveExperimentView 构造/析构

CComprehensiveExperimentView::CComprehensiveExperimentView()
	: CRecordView(IDD_COMPREHENSIVEEXPERIMENT_FORM)
	, m_1(_T(""))
	, m_2(_T(""))
	, m_3(_T(""))
	, m_4(_T(""))
	, m_5(_T(""))
	, m_6(_T(""))
	, m_7(_T(""))
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码
	path = _T("C:\\Users\\dell\\Desktop\\新建文件夹\\");

}

CComprehensiveExperimentView::~CComprehensiveExperimentView()
{
}

void CComprehensiveExperimentView::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_1);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->m_2);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->m_3);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->m_4);
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_5);
	DDX_Text(pDX, IDC_EDIT6, m_pSet->m_6);
	DDX_Text(pDX, IDC_EDIT7, m_pSet->m_7);
}

BOOL CComprehensiveExperimentView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void CComprehensiveExperimentView::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_ComprehensiveExperimentSet;
	CRecordView::OnInitialUpdate();

}


// CComprehensiveExperimentView 诊断

#ifdef _DEBUG
void CComprehensiveExperimentView::AssertValid() const
{
	CRecordView::AssertValid();
}

void CComprehensiveExperimentView::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CComprehensiveExperimentDoc* CComprehensiveExperimentView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CComprehensiveExperimentDoc)));
	return (CComprehensiveExperimentDoc*)m_pDocument;
}
#endif //_DEBUG


// CComprehensiveExperimentView 数据库支持
CRecordset* CComprehensiveExperimentView::OnGetRecordset()
{
	return m_pSet;
}



// CComprehensiveExperimentView 消息处理程序


void CComprehensiveExperimentView::OnInformation()
{
	// TODO: 在此添加命令处理程序代码
}

void CComprehensiveExperimentView::OnRecordFirst()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveFirst();
	UpdateData(false);
	CString filename;
	filename = path + m_pSet->m_8;

	DrawPic(filename);
}

void CComprehensiveExperimentView::OnRecordPrev()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();

	UpdateData(false);

	CString filename;
	filename = path + m_pSet->m_8;

	DrawPic(filename);
}


void CComprehensiveExperimentView::OnRecordNext()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveNext();
	if (m_pSet->IsEOF())
		m_pSet->MoveLast();
	UpdateData(false);

	CString filename;
	filename = path + m_pSet->m_8;

	DrawPic(filename);
}


void CComprehensiveExperimentView::OnRecordLast()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveLast();
	UpdateData(false);

	CString filename;
	filename = path + m_pSet->m_8;

	DrawPic(filename);
}




void CComprehensiveExperimentView::DrawPic(CString file)
{
	CImage img;
	
	CDC *pDC = GetDlgItem(IDC_STATIC)->GetDC();
	
	CRect rect;
	GetDlgItem(IDC_STATIC)->GetClientRect(&rect);

	int x, y;
	x = rect.right - rect.left;
	y = rect.bottom - rect.top;
	CString s;
	s = file;
	
		img.Load(s);
		img.Draw(pDC->m_hDC, 0, 0, x, y);
	
}