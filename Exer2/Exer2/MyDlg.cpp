// MyDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Exer2.h"
#include "MyDlg.h"
#include "afxdialogex.h"
#include "Exer2Doc.h"
#include "Exer2Set.h"
#include "Exer2View.h"


// MyDlg �Ի���

IMPLEMENT_DYNAMIC(MyDlg, CDialog)

MyDlg::MyDlg(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_DIALOG1, pParent)
	, filename(_T(""))
{
	path = _T("C:\\Users\\dell\\Desktop\\�½��ļ���\\");
}

MyDlg::~MyDlg()
{
}

void MyDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);

	

}


BEGIN_MESSAGE_MAP(MyDlg, CDialog)
	ON_WM_PAINT()
END_MESSAGE_MAP()


// MyDlg ��Ϣ�������
void MyDlg::DrawPic(CString file)
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


void MyDlg::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: �ڴ˴������Ϣ����������
					   // ��Ϊ��ͼ��Ϣ���� CDialog::OnPaint()

	DrawPic(filename);

	
}
