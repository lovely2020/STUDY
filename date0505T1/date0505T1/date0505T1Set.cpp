
// date0505T1Set.cpp : Cdate0505T1Set ���ʵ��
//

#include "stdafx.h"
#include "date0505T1.h"
#include "date0505T1Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cdate0505T1Set ʵ��

// ���������� 2020��5��18��, 9:02

IMPLEMENT_DYNAMIC(Cdate0505T1Set, CRecordset)

Cdate0505T1Set::Cdate0505T1Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	m_1 = L"";
	m_2 = L"";
	m_3 = L"";
	m_4 = L"";
	m_5 = L"";
	m_nFields = 6;
	m_nDefaultType = snapshot;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString Cdate0505T1Set::GetDefaultConnect()
{
	return _T("DSN=\x5b66\x751f\x4fe1\x606f;DBQ=C:\\Users\\dell\\Desktop\\Database41.accdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString Cdate0505T1Set::GetDefaultSQL()
{
	return _T("[ѧ��������Ϣ]");
}

void Cdate0505T1Set::DoFieldExchange(CFieldExchange* pFX)
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
// Cdate0505T1Set ���

#ifdef _DEBUG
void Cdate0505T1Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void Cdate0505T1Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

