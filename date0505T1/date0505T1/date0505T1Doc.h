
// date0505T1Doc.h : Cdate0505T1Doc ��Ľӿ�
//


#pragma once
#include "date0505T1Set.h"


class Cdate0505T1Doc : public CDocument
{
protected: // �������л�����
	Cdate0505T1Doc();
	DECLARE_DYNCREATE(Cdate0505T1Doc)

// ����
public:
	Cdate0505T1Set m_date0505T1Set;

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~Cdate0505T1Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
