// ADDUPDATA.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Exer3.h"
#include "ADDUPDATA.h"
#include "afxdialogex.h"


// ADDUPDATA �Ի���

IMPLEMENT_DYNAMIC(ADDUPDATA, CDialogEx)

ADDUPDATA::ADDUPDATA(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_UPDATA, pParent)
	, m_1(_T(""))
{

}

ADDUPDATA::~ADDUPDATA()
{
}

void ADDUPDATA::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_1);
}


BEGIN_MESSAGE_MAP(ADDUPDATA, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &ADDUPDATA::OnEnChangeEdit1)
END_MESSAGE_MAP()


// ADDUPDATA ��Ϣ�������


void ADDUPDATA::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}
