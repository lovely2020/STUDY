
// date0505T1View.cpp : Cdate0505T1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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

// Cdate0505T1View ����/����

Cdate0505T1View::Cdate0505T1View()
	: CRecordView(IDD_DATE0505T1_FORM)
	, m_1(_T(""))
	, m_2(_T(""))
	, m_3(_T(""))
	, m_4(_T(""))
	, m_5(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

Cdate0505T1View::~Cdate0505T1View()
{
}

void Cdate0505T1View::DoDataExchange(CDataExchange* pDX)
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
	DDX_Text(pDX, IDC_EDIT6, m_pSet->m_5);
}

BOOL Cdate0505T1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void Cdate0505T1View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_date0505T1Set;
	CRecordView::OnInitialUpdate();

}


// Cdate0505T1View ���

#ifdef _DEBUG
void Cdate0505T1View::AssertValid() const
{
	CRecordView::AssertValid();
}

void Cdate0505T1View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

Cdate0505T1Doc* Cdate0505T1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cdate0505T1Doc)));
	return (Cdate0505T1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cdate0505T1View ���ݿ�֧��
CRecordset* Cdate0505T1View::OnGetRecordset()
{
	return m_pSet;
}



// Cdate0505T1View ��Ϣ�������


void Cdate0505T1View::OnEnChangeEdit6()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CRecordView::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}
