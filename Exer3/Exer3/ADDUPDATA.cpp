// ADDUPDATA.cpp : 实现文件
//

#include "stdafx.h"
#include "Exer3.h"
#include "ADDUPDATA.h"
#include "afxdialogex.h"


// ADDUPDATA 对话框

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


// ADDUPDATA 消息处理程序


void ADDUPDATA::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}
