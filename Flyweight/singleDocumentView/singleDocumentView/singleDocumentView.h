
// singleDocumentView.h : singleDocumentView Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CsingleDocumentViewApp:
// �йش����ʵ�֣������ singleDocumentView.cpp
//

class CsingleDocumentViewApp : public CWinAppEx
{
public:
	CsingleDocumentViewApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CsingleDocumentViewApp theApp;
