
// Exer2Set.cpp : CExer2Set ���ʵ��
//

#include "stdafx.h"
#include "Exer2.h"
#include "Exer2Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CExer2Set ʵ��

// ���������� 2020��5��25��, 11:41

IMPLEMENT_DYNAMIC(CExer2Set, CRecordset)

CExer2Set::CExer2Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	m_1 = L"";
	m_2 = L"";
	m_3 = L"";
	m_4 = L"";
	m_5 = L"";
	m_6 = L"";
	m_7 = L"";
	m_8 = L"";
	m_nFields = 9;
	m_nDefaultType = dynaset;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CExer2Set::GetDefaultConnect()
{
	return _T("DSN=\x5b66\x751f\x6863\x6848;DBQ=C:\\Users\\dell\\Documents\\\x5b66\x751f\x4fe1\x606f.accdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString CExer2Set::GetDefaultSQL()
{
	return _T("[ѧ������]");
}

void CExer2Set::DoFieldExchange(CFieldExchange* pFX)
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
	RFX_Text(pFX, _T("[�ֶ�6]"), m_6);
	RFX_Text(pFX, _T("[�ֶ�7]"), m_7);
	RFX_Text(pFX, _T("[�ֶ�8]"), m_8);

}
/////////////////////////////////////////////////////////////////////////////
// CExer2Set ���

#ifdef _DEBUG
void CExer2Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CExer2Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

