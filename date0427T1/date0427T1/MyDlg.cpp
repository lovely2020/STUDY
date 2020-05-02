// MyDlg.cpp: 实现文件
//

#include "pch.h"
#include "date0427T1.h"
#include "MyDlg.h"
#include "afxdialogex.h"
#include "date0427T1Doc.h"
#include "date0427T1View.h"



// MyDlg 对话框

IMPLEMENT_DYNAMIC(MyDlg, CDialogEx)

MyDlg::MyDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, c(_T(""))
{

}

MyDlg::~MyDlg()
{
}

void MyDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, Lbox);
	DDX_Text(pDX, IDC_EDIT1, c);
}


BEGIN_MESSAGE_MAP(MyDlg, CDialogEx)
	ON_LBN_SELCHANGE(IDC_LIST1, &MyDlg::OnLbnSelchangeList1)
	ON_WM_LBUTTONUP()
	ON_BN_CLICKED(IDC_BUTTON1, &MyDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDOK, &MyDlg::OnBnClickedOk)
END_MESSAGE_MAP()


// MyDlg 消息处理程序


void MyDlg::OnLbnSelchangeList1()
{
	// TODO: 在此添加控件通知处理程序代码
	CString str;
	i = Lbox.GetCurSel();
	Lbox.GetText(i, str);
	UpdateData();
	c = str;
	UpdateData(false);


	
}


BOOL MyDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	flag = false;
	CStdioFile file;
	file.Open(_T("C:\\Users\\dell\\source\\repos\\date0427T1\\学生名单.txt"), CFile::typeText);

	file.SeekToBegin();
	CString s;
	

	

	while (file.ReadString(s))
	{
		Lbox.AddString(s);
			
	}
    file.Close();

	
	
	
	
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void MyDlg::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	
	CDialogEx::OnLButtonUp(nFlags, point);
}


void MyDlg::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	CString str;
	UpdateData();
	str = c;
	Lbox.DeleteString(i);
	Lbox.InsertString(i, str);
	UpdateData(false);


}


void MyDlg::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	CStdioFile file;
	file.Open(_T("C:\\Users\\dell\\source\\repos\\date0427T1\\学生名单.txt"), CFile::modeCreate| CFile::modeWrite,NULL);
	file.SeekToBegin();
	Lbox.SetCurSel(Lbox.GetCount() - 1);

	CString s;

	for (int j = 0; j < Lbox.GetCount() ; j++)
	{
		Lbox.GetText(j, s);
		s += "\n";
		file.WriteString(s);
	}
	file.Close();



	CDialogEx::OnOK();
}
