
// Exer2View.cpp : CExer2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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

// CExer2View ����/����

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
	// TODO: �ڴ˴���ӹ������
	path = _T("C:\\Users\\dell\\Desktop\\�½��ļ���\\");

}

CExer2View::~CExer2View()
{
}

void CExer2View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
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
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CExer2View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_Exer2Set;
	CRecordView::OnInitialUpdate();

}


// CExer2View ���

#ifdef _DEBUG
void CExer2View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CExer2View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CExer2Doc* CExer2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CExer2Doc)));
	return (CExer2Doc*)m_pDocument;
}
#endif //_DEBUG


// CExer2View ���ݿ�֧��
CRecordset* CExer2View::OnGetRecordset()
{
	return m_pSet;
}



// CExer2View ��Ϣ�������


void CExer2View::OnEnChangeEdit7()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CRecordView::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CExer2View::OnRecordFirst()
{
	// TODO: �ڴ���������������
	m_pSet->MoveFirst();
	UpdateData(false);
	CString filename;
	filename = path + m_pSet->m_8;

	DrawPic(filename);

}


void CExer2View::OnRecordPrev()
{
	// TODO: �ڴ���������������
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
	// TODO: �ڴ���������������
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
	// TODO: �ڴ���������������
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
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	MyDlg dlg;
	CString filename;
	filename = path + m_pSet->m_8;
	dlg.filename = filename;
	dlg.DoModal();
	
	
	
	
}


void CExer2View::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: �ڴ˴������Ϣ����������
					   // ��Ϊ��ͼ��Ϣ���� CRecordView::OnPaint()

}
