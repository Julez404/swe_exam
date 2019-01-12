
// testat.h: Hauptheaderdatei für die PROJECT_NAME-Anwendung
//

#pragma once

#ifndef __AFXWIN_H__
	#error "'stdafx.h' vor dieser Datei für PCH einschließen"
#endif

#include "resource.h"		// Hauptsymbole


// CtestatApp:
// Siehe testat.cpp für die Implementierung dieser Klasse
//

class CtestatApp : public CWinApp
{
public:
	CtestatApp();

// Überschreibungen
public:
	virtual BOOL InitInstance();

// Implementierung

	DECLARE_MESSAGE_MAP()
};

extern CtestatApp theApp;