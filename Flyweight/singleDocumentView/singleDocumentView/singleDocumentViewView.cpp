
// singleDocumentViewView.cpp : CsingleDocumentViewView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "singleDocumentView.h"
#endif

#include "singleDocumentViewDoc.h"
#include "singleDocumentViewView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CsingleDocumentViewView

IMPLEMENT_DYNCREATE(CsingleDocumentViewView, CView)

BEGIN_MESSAGE_MAP(CsingleDocumentViewView, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CsingleDocumentViewView ����/����

CsingleDocumentViewView::CsingleDocumentViewView()
{
	// TODO: �ڴ˴���ӹ������

}

CsingleDocumentViewView::~CsingleDocumentViewView()
{
}

BOOL CsingleDocumentViewView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CsingleDocumentViewView ����

void CsingleDocumentViewView::OnDraw(CDC* /*pDC*/)
{
	CsingleDocumentViewDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CsingleDocumentViewView ��ӡ

BOOL CsingleDocumentViewView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CsingleDocumentViewView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CsingleDocumentViewView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CsingleDocumentViewView ���

#ifdef _DEBUG
void CsingleDocumentViewView::AssertValid() const
{
	CView::AssertValid();
}

void CsingleDocumentViewView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CsingleDocumentViewDoc* CsingleDocumentViewView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CsingleDocumentViewDoc)));
	return (CsingleDocumentViewDoc*)m_pDocument;
}
#endif //_DEBUG


// CsingleDocumentViewView ��Ϣ�������
