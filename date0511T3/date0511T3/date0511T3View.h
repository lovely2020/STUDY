
// date0511T3View.h : Cdate0511T3View ��Ľӿ�
//

#pragma once

class Cdate0511T3Set;

class Cdate0511T3View : public CRecordView
{
protected: // �������л�����
	Cdate0511T3View();
	DECLARE_DYNCREATE(Cdate0511T3View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_DATE0511T3_FORM };
#endif
	Cdate0511T3Set* m_pSet;

// ����
public:
	Cdate0511T3Doc* GetDocument() const;

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
	virtual ~Cdate0511T3View();
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
};

#ifndef _DEBUG  // date0511T3View.cpp �еĵ��԰汾
inline Cdate0511T3Doc* Cdate0511T3View::GetDocument() const
   { return reinterpret_cast<Cdate0511T3Doc*>(m_pDocument); }
#endif

