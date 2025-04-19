// CTimeEndDlg.cpp: 实现文件
//

#include "pch.h"
#include "PomodoroTimer.h"
#include "afxdialogex.h"
#include "TimeEndDlg.h"
#include "resource.h"


// CTimeEndDlg 对话框

IMPLEMENT_DYNAMIC(CTimeEndDlg, CDialogEx)

CWnd* CTimeEndDlg::m_pInstance = nullptr;


CTimeEndDlg::CTimeEndDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DLG_TIME_END, pParent)
{
	m_pInstance = this;
}

CTimeEndDlg::~CTimeEndDlg()
{
	m_pInstance = nullptr; // 析构时重置静态指针
}

void CTimeEndDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CTimeEndDlg, CDialogEx)
END_MESSAGE_MAP()


// CTimeEndDlg 消息处理程序
