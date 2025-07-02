
#include "stdafx.h"
#include "SumApp.h"
#include "SumAppDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

BEGIN_MESSAGE_MAP(CSumAppDlg, CDialog)
    ON_WM_PAINT()
    ON_WM_QUERYDRAGICON()
    ON_BN_CLICKED(IDOK, &CSumAppDlg::OnBnClickedOk)
END_MESSAGE_MAP()

CSumAppDlg::CSumAppDlg(CWnd* pParent /*=NULL*/)
    : CDialog(IDD_SUMAPP_DIALOG, pParent) {
    m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CSumAppDlg::DoDataExchange(CDataExchange* pDX) {
    CDialog::DoDataExchange(pDX);
    DDX_Control(pDX, IDC_EDIT1, m_edit1);
    DDX_Control(pDX, IDC_EDIT2, m_edit2);
    DDX_Control(pDX, IDC_EDIT3, m_result);
}

BOOL CSumAppDlg::OnInitDialog() {
    CDialog::OnInitDialog();
    SetIcon(m_hIcon, TRUE);
    SetIcon(m_hIcon, FALSE);
    return TRUE;
}

void CSumAppDlg::OnBnClickedOk() {
    CString str1, str2;
    m_edit1.GetWindowText(str1);
    m_edit2.GetWindowText(str2);
    int num1 = _ttoi(str1);
    int num2 = _ttoi(str2);
    CString result;
    result.Format(_T("%d"), num1 + num2);
    m_result.SetWindowText(result);
}
