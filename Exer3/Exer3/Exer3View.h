
// Exer3View.h : CExer3View ��Ľӿ�
//

#pragma once

class CExer3Set;

class CExer3View : public CRecordView
{
protected: // �������л�����
	CExer3View();
	DECLARE_DYNCREATE(CExer3View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_EXER3_FORM };
#endif
	CExer3Set* m_pSet;

// ����
public:
	CExer3Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���

// ʵ��
public:
	virtual ~CExer3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton1();
	CString m_1;
	CString m_2;
	CString m_3;
	CString m_4;
	CString m_5;
	CString m_6;
	afx_msg void OnBnClickedButton3();
};

#ifndef _DEBUG  // Exer3View.cpp �еĵ��԰汾
inline CExer3Doc* CExer3View::GetDocument() const
   { return reinterpret_cast<CExer3Doc*>(m_pDocument); }
#endif

