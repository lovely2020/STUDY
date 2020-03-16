
// 0316T01View.h: CMy0316T01View 类的接口
//

#pragma once


class CMy0316T01View : public CView
{
protected: // 仅从序列化创建
	CMy0316T01View() noexcept;
	DECLARE_DYNCREATE(CMy0316T01View)

// 特性
public:
	CMy0316T01Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy0316T01View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 0316T01View.cpp 中的调试版本
inline CMy0316T01Doc* CMy0316T01View::GetDocument() const
   { return reinterpret_cast<CMy0316T01Doc*>(m_pDocument); }
#endif

