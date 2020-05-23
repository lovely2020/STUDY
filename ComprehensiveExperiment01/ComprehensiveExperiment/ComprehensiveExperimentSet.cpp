
// ComprehensiveExperimentSet.cpp : CComprehensiveExperimentSet 类的实现
//

#include "stdafx.h"
#include "ComprehensiveExperiment.h"
#include "ComprehensiveExperimentSet.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CComprehensiveExperimentSet 实现

// 代码生成在 2020年5月19日, 20:52

IMPLEMENT_DYNAMIC(CComprehensiveExperimentSet, CRecordset)

CComprehensiveExperimentSet::CComprehensiveExperimentSet(CDatabase* pdb)
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
//#error 安全问题: 连接字符串可能包含密码。
// 此连接字符串中可能包含明文密码和/或其他重要
// 信息。请在查看完此连接字符串并找到所有与安全
// 有关的问题后移除 #error。可能需要将此密码存
// 储为其他格式或使用其他的用户身份验证。
CString CComprehensiveExperimentSet::GetDefaultConnect()
{
	return _T("DSN=\x5b66\x751f\x6863\x6848;DBQ=C:\\Users\\dell\\Documents\\\x5b66\x751f\x4fe1\x606f.accdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString CComprehensiveExperimentSet::GetDefaultSQL()
{
	return _T("[学生档案]");
}

void CComprehensiveExperimentSet::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() 和 RFX_Int() 这类宏依赖的是
// 成员变量的类型，而不是数据库字段的类型。
// ODBC 尝试自动将列值转换为所请求的类型
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[字段1]"), m_1);
	RFX_Text(pFX, _T("[字段2]"), m_2);
	RFX_Text(pFX, _T("[字段3]"), m_3);
	RFX_Text(pFX, _T("[字段4]"), m_4);
	RFX_Text(pFX, _T("[字段5]"), m_5);
	RFX_Text(pFX, _T("[字段6]"), m_6);
	RFX_Text(pFX, _T("[字段7]"), m_7);
	RFX_Text(pFX, _T("[字段8]"), m_8);

}
/////////////////////////////////////////////////////////////////////////////
// CComprehensiveExperimentSet 诊断

#ifdef _DEBUG
void CComprehensiveExperimentSet::AssertValid() const
{
	CRecordset::AssertValid();
}

void CComprehensiveExperimentSet::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

