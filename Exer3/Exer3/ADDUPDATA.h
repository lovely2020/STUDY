#pragma once


// ADDUPDATA 对话框

class ADDUPDATA : public CDialogEx
{
	DECLARE_DYNAMIC(ADDUPDATA)

public:
	ADDUPDATA(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~ADDUPDATA();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_UPDATA };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString m_1;
	afx_msg void OnEnChangeEdit1();
};
