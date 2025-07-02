
#include "stdafx.h"
#include "SumApp.h"
#include "SumAppDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

BEGIN_MESSAGE_MAP(CSumApp, CWinApp)
    ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()

CSumApp::CSumApp() {}

CSumApp theApp;

BOOL CSumApp::InitInstance() {
    CWinApp::InitInstance();
    AfxEnableControlContainer();

    CSumAppDlg dlg;
    m_pMainWnd = &dlg;
    INT_PTR nResponse = dlg.DoModal();
    return FALSE;
}
