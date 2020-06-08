#pragma once


// ADDDLG 对话框

class ADDDLG : public CDialogEx
{
	DECLARE_DYNAMIC(ADDDLG)

public:
	ADDDLG(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~ADDDLG();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ADD };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString m;
};
