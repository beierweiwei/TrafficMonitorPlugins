#pragma once
#include "afxdialogex.h"

// CTimeEndDlg 对话框

class CTimeEndDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CTimeEndDlg)

public:
	CTimeEndDlg(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CTimeEndDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DLG_TIME_END };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	static CWnd* m_pInstance;
};
