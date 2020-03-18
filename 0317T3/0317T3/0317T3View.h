
// 0317T3View.h: CMy0317T3View 类的接口
//

#pragma once


class CMy0317T3View : public CView
{
protected: // 仅从序列化创建
	CMy0317T3View() noexcept;
	DECLARE_DYNCREATE(CMy0317T3View)

// 特性
public:
	CMy0317T3Doc* GetDocument() const;

// 操作
public:

	

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy0317T3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	
	afx_msg void OnSize(UINT nType, int cx, int cy);
};

#ifndef _DEBUG  // 0317T3View.cpp 中的调试版本
inline CMy0317T3Doc* CMy0317T3View::GetDocument() const
   { return reinterpret_cast<CMy0317T3Doc*>(m_pDocument); }
#endif

