
// date0511T01Doc.h : Cdate0511T01Doc ��Ľӿ�
//


#pragma once
#include "date0511T01Set.h"


class Cdate0511T01Doc : public CDocument
{
protected: // �������л�����
	Cdate0511T01Doc();
	DECLARE_DYNCREATE(Cdate0511T01Doc)

// ����
public:
	Cdate0511T01Set m_date0511T01Set;

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~Cdate0511T01Doc();
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
