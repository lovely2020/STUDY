
// date0505T1View.h : Cdate0505T1View ��Ľӿ�
//

#pragma once

class Cdate0505T1Set;

class Cdate0505T1View : public CRecordView
{
protected: // �������л�����
	Cdate0505T1View();
	DECLARE_DYNCREATE(Cdate0505T1View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_DATE0505T1_FORM };
#endif
	Cdate0505T1Set* m_pSet;

// ����
public:
	Cdate0505T1Doc* GetDocument() const;

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
	virtual ~Cdate0505T1View();
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
	afx_msg void OnEnChangeEdit6();
	CString m_5;
};

#ifndef _DEBUG  // date0505T1View.cpp �еĵ��԰汾
inline Cdate0505T1Doc* Cdate0505T1View::GetDocument() const
   { return reinterpret_cast<Cdate0505T1Doc*>(m_pDocument); }
#endif

