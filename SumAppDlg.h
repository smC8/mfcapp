
#pragma once

class CSumAppDlg : public CDialog {
public:
    CSumAppDlg(CWnd* pParent = NULL);

    enum { IDD = IDD_SUMAPP_DIALOG };

    protected:
    virtual void DoDataExchange(CDataExchange* pDX);

protected:
    HICON m_hIcon;
    CEdit m_edit1;
    CEdit m_edit2;
    CEdit m_result;

    DECLARE_MESSAGE_MAP()
public:
    virtual BOOL OnInitDialog();
    afx_msg void OnBnClickedOk();
};
