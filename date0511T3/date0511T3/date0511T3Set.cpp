
// date0511T3Set.cpp : Cdate0511T3Set ���ʵ��
//

#include "stdafx.h"
#include "date0511T3.h"
#include "date0511T3Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cdate0511T3Set ʵ��

// ���������� 2020��5��18��, 14:24

IMPLEMENT_DYNAMIC(Cdate0511T3Set, CRecordset)

Cdate0511T3Set::Cdate0511T3Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	m_1 = L"";
	m_2 = L"";
	m_3 = L"";
	m_4 = L"";
	m_5 = L"";
	m_nFields = 6;
	m_nDefaultType = dynaset;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString Cdate0511T3Set::GetDefaultConnect()
{
	return _T("DSN=\x5b66\x751f\x4fe1\x606f;DBQ=C:\\Users\\dell\\Desktop\\Database41.accdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString Cdate0511T3Set::GetDefaultSQL()
{
	return _T("[ѧ��������Ϣ]");
}

void Cdate0511T3Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[�ֶ�1]"), m_1);
	RFX_Text(pFX, _T("[�ֶ�2]"), m_2);
	RFX_Text(pFX, _T("[�ֶ�3]"), m_3);
	RFX_Text(pFX, _T("[�ֶ�4]"), m_4);
	RFX_Text(pFX, _T("[�ֶ�5]"), m_5);

}
/////////////////////////////////////////////////////////////////////////////
// Cdate0511T3Set ���

#ifdef _DEBUG
void Cdate0511T3Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void Cdate0511T3Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

