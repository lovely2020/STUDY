
// date0511T01View.cpp : Cdate0511T01View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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

// Cdate0511T01View ����/����

Cdate0511T01View::Cdate0511T01View()
	: CRecordView(IDD_DATE0511T01_FORM)
	, ID(0)
	, m_1(_T(""))
	, m_2(_T(""))
	, m_3(_T(""))
	, m_4(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

Cdate0511T01View::~Cdate0511T01View()
{
}

void Cdate0511T01View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_ID);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->m_1);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_2);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->m_3);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->m_4);
}

BOOL Cdate0511T01View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void Cdate0511T01View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_date0511T01Set;
	CRecordView::OnInitialUpdate();

}


// Cdate0511T01View ���

#ifdef _DEBUG
void Cdate0511T01View::AssertValid() const
{
	CRecordView::AssertValid();
}

void Cdate0511T01View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

Cdate0511T01Doc* Cdate0511T01View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cdate0511T01Doc)));
	return (Cdate0511T01Doc*)m_pDocument;
}
#endif //_DEBUG


// Cdate0511T01View ���ݿ�֧��
CRecordset* Cdate0511T01View::OnGetRecordset()
{
	return m_pSet;
}



// Cdate0511T01View ��Ϣ�������


void Cdate0511T01View::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	//m_pSet->Update();
}


void Cdate0511T01View::OnBnClickedButton2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������

	
	CRect rect;
	CString s;
	s = m_pSet->m_5;//�Ӽ�¼����ǰ��¼����ȡ��2���ֶ�ֵ������s�� 
	CDC *pDC = GetDlgItem(IDC_STATIC)->GetDC();
	//pDC->TextOutW(200, 200, s);
	CWnd *pWnd = GetDlgItem(IDC_STATIC);//���picture�ؼ����ھ��
	pWnd->GetClientRect(&rect);//��ȡpicture�ؼ����ڵľ�������

	
	CImage img;
	img.Load(s);
	img.Draw(pDC->m_hDC,0,0,rect.right-rect.left,rect.bottom-rect.top);

	
	
}
