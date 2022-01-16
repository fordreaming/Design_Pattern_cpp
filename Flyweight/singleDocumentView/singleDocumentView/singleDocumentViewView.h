
// singleDocumentViewView.h : CsingleDocumentViewView ��Ľӿ�
//

#pragma once


class CsingleDocumentViewView : public CView
{
protected: // �������л�����
	CsingleDocumentViewView();
	DECLARE_DYNCREATE(CsingleDocumentViewView)

// ����
public:
	CsingleDocumentViewDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CsingleDocumentViewView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // singleDocumentViewView.cpp �еĵ��԰汾
inline CsingleDocumentViewDoc* CsingleDocumentViewView::GetDocument() const
   { return reinterpret_cast<CsingleDocumentViewDoc*>(m_pDocument); }
#endif

