
// Exer2View.cpp : CExer2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Exer2.h"
#endif

#include "Exer2Set.h"
#include "Exer2Doc.h"
#include "Exer2View.h"
#include "MyDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CExer2View

IMPLEMENT_DYNCREATE(CExer2View, CRecordView)

BEGIN_MESSAGE_MAP(CExer2View, CRecordView)
	ON_EN_CHANGE(IDC_EDIT7, &CExer2View::OnEnChangeEdit7)
	ON_COMMAND(ID_RECORD_FIRST, &CExer2View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &CExer2View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &CExer2View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &CExer2View::OnRecordLast)
	ON_BN_CLICKED(IDC_BUTTON1, &CExer2View::OnBnClickedButton1)
	ON_WM_PAINT()
END_MESSAGE_MAP()

// CExer2View 构造/析构

CExer2View::CExer2View()
	: CRecordView(IDD_EXER2_FORM)
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

CExer2View::~CExer2View()
{
}

void CExer2View::DoDataExchange(CDataExchange* pDX)
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
	DDX_Text(pDX, IDC_EDIT7, m_pSet->m_7);
}

BOOL CExer2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void CExer2View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_Exer2Set;
	CRecordView::OnInitialUpdate();

}


// CExer2View 诊断

#ifdef _DEBUG
void CExer2View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CExer2View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CExer2Doc* CExer2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CExer2Doc)));
	return (CExer2Doc*)m_pDocument;
}
#endif //_DEBUG


// CExer2View 数据库支持
CRecordset* CExer2View::OnGetRecordset()
{
	return m_pSet;
}



// CExer2View 消息处理程序


void CExer2View::OnEnChangeEdit7()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CRecordView::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void CExer2View::OnRecordFirst()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveFirst();
	UpdateData(false);
	CString filename;
	filename = path + m_pSet->m_8;

	DrawPic(filename);

}


void CExer2View::OnRecordPrev()
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


void CExer2View::OnRecordNext()
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


void CExer2View::OnRecordLast()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveLast();
	UpdateData(false);

	CString filename;
	filename = path + m_pSet->m_8;

	UpdateData(false);
	DrawPic(filename);
}

void CExer2View::DrawPic(CString file)
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


void CExer2View::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	MyDlg dlg;
	CString filename;
	filename = path + m_pSet->m_8;
	dlg.filename = filename;
	dlg.DoModal();
	
	
	
	
}


void CExer2View::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 在此处添加消息处理程序代码
					   // 不为绘图消息调用 CRecordView::OnPaint()

}
