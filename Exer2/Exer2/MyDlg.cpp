// MyDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "Exer2.h"
#include "MyDlg.h"
#include "afxdialogex.h"
#include "Exer2Doc.h"
#include "Exer2Set.h"
#include "Exer2View.h"


// MyDlg 对话框

IMPLEMENT_DYNAMIC(MyDlg, CDialog)

MyDlg::MyDlg(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_DIALOG1, pParent)
	, filename(_T(""))
{
	path = _T("C:\\Users\\dell\\Desktop\\新建文件夹\\");
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


// MyDlg 消息处理程序
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
					   // TODO: 在此处添加消息处理程序代码
					   // 不为绘图消息调用 CDialog::OnPaint()

	DrawPic(filename);

	
}
