
// Exer2View.h : CExer2View ��Ľӿ�
//

#pragma once

class CExer2Set;

class CExer2View : public CRecordView
{
protected: // �������л�����
	CExer2View();
	DECLARE_DYNCREATE(CExer2View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_EXER2_FORM };
#endif
	CExer2Set* m_pSet;
	CString path;

// ����
public:
	CExer2Doc* GetDocument() const;

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
	virtual ~CExer2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit7();
	CString m_1;
	CString m_2;
	CString m_3;
	CString m_4;
	CString m_5;
	CString m_6;
	CString m_7;
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	void DrawPic(CString file);
	afx_msg void OnBnClickedButton1();
	afx_msg void OnPaint();
};

#ifndef _DEBUG  // Exer2View.cpp �еĵ��԰汾
inline CExer2Doc* CExer2View::GetDocument() const
   { return reinterpret_cast<CExer2Doc*>(m_pDocument); }
#endif

