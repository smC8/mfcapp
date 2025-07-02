
#pragma once

#ifndef __AFXWIN_H__
    #error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"

class CSumApp : public CWinApp {
public:
    CSumApp();
    virtual BOOL InitInstance();
    DECLARE_MESSAGE_MAP()
};

extern CSumApp theApp;
