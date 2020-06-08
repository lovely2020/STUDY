// ADDDLG.cpp : 实现文件
//

#include "stdafx.h"
#include "Exer3.h"
#include "ADDDLG.h"
#include "afxdialogex.h"


// ADDDLG 对话框

IMPLEMENT_DYNAMIC(ADDDLG, CDialogEx)

ADDDLG::ADDDLG(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_ADD, pParent)
	, m(_T(""))
{

}

ADDDLG::~ADDDLG()
{
}

void ADDDLG::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m);
}


BEGIN_MESSAGE_MAP(ADDDLG, CDialogEx)
END_MESSAGE_MAP()


// ADDDLG 消息处理程序
