
// date0511T01View.h : Cdate0511T01View ��Ľӿ�
//

#pragma once

class Cdate0511T01Set;

class Cdate0511T01View : public CRecordView
{
protected: // �������л�����
	Cdate0511T01View();
	DECLARE_DYNCREATE(Cdate0511T01View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_DATE0511T01_FORM };
#endif
	Cdate0511T01Set* m_pSet;

// ����
public:
	Cdate0511T01Doc* GetDocument() const;

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
	virtual ~Cdate0511T01View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	long ID;
	CString m_1;
	CString m_2;
	CString m_3;
	CString m_4;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
};

#ifndef _DEBUG  // date0511T01View.cpp �еĵ��԰汾
inline Cdate0511T01Doc* Cdate0511T01View::GetDocument() const
   { return reinterpret_cast<Cdate0511T01Doc*>(m_pDocument); }
#endif

