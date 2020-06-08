
// Exer3View.cpp : CExer3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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

// CExer3View ����/����

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
	// TODO: �ڴ˴���ӹ������

}

CExer3View::~CExer3View()
{
}

void CExer3View::DoDataExchange(CDataExchange* pDX)
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
}

BOOL CExer3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CExer3View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_Exer3Set;
	CRecordView::OnInitialUpdate();

}


// CExer3View ���

#ifdef _DEBUG
void CExer3View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CExer3View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CExer3Doc* CExer3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CExer3Doc)));
	return (CExer3Doc*)m_pDocument;
}
#endif //_DEBUG


// CExer3View ���ݿ�֧��
CRecordset* CExer3View::OnGetRecordset()
{
	return m_pSet;
}



// CExer3View ��Ϣ�������


void CExer3View::OnBnClickedButton2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
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
	// TODO: �ڴ���ӿؼ�֪ͨ����������
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
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	m_pSet->Delete();
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);
}
