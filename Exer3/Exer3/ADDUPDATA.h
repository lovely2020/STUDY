#pragma once


// ADDUPDATA �Ի���

class ADDUPDATA : public CDialogEx
{
	DECLARE_DYNAMIC(ADDUPDATA)

public:
	ADDUPDATA(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~ADDUPDATA();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_UPDATA };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString m_1;
	afx_msg void OnEnChangeEdit1();
};
