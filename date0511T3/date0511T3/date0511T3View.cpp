
// date0511T3View.cpp : Cdate0511T3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "date0511T3.h"
#endif

#include "date0511T3Set.h"
#include "date0511T3Doc.h"
#include "date0511T3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cdate0511T3View

IMPLEMENT_DYNCREATE(Cdate0511T3View, CRecordView)

BEGIN_MESSAGE_MAP(Cdate0511T3View, CRecordView)
END_MESSAGE_MAP()

// Cdate0511T3View ����/����

Cdate0511T3View::Cdate0511T3View()
	: CRecordView(IDD_DATE0511T3_FORM)
	, ID(0)
	, m_1(_T(""))
	, m_2(_T(""))
	, m_3(_T(""))
	, m_4(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

Cdate0511T3View::~Cdate0511T3View()
{
}

void Cdate0511T3View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_ID);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_1);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->m_2);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->m_3);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->m_4);


	CRect rect;
	CWnd *pWnd = GetDlgItem(IDC_STATIC);//���picture�ؼ����ھ��
	pWnd->GetClientRect(&rect);//��ȡpicture�ؼ����ڵľ�������
	CDC *pDC = GetDlgItem(IDC_STATIC)->GetDC();
	CString s;
	s = m_pSet->m_5;
	CImage img;

	int x, y;
	x = rect.right - rect.left;
	y = rect.bottom - rect.top;

	if (s != _T("ͼƬ"))
	{
		img.Load(s);
		img.Draw(pDC->m_hDC, 0, 0, x, y);
	}

}

BOOL Cdate0511T3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void Cdate0511T3View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_date0511T3Set;
	CRecordView::OnInitialUpdate();



}


// Cdate0511T3View ���

#ifdef _DEBUG
void Cdate0511T3View::AssertValid() const
{
	CRecordView::AssertValid();
}

void Cdate0511T3View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

Cdate0511T3Doc* Cdate0511T3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cdate0511T3Doc)));
	return (Cdate0511T3Doc*)m_pDocument;
}
#endif //_DEBUG


// Cdate0511T3View ���ݿ�֧��
CRecordset* Cdate0511T3View::OnGetRecordset()
{
	return m_pSet;
}



// Cdate0511T3View ��Ϣ�������
