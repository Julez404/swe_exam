
// testatDlg.h: Headerdatei
//

#pragma once

#include "Punkt.h"
#include "Strecke.h"

// CtestatDlg-Dialogfeld
class CtestatDlg : public CDialogEx
{
// Konstruktion
public:
	CtestatDlg(CWnd* pParent = NULL);	// Standardkonstruktor

// Dialogfelddaten
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TESTAT_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV-Unterst�tzung


// Implementierung
protected:
	HICON m_hIcon;

	// Generierte Funktionen f�r die Meldungstabellen
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	void OnLButtonDown(UINT nFlags, CPoint point);
	DECLARE_MESSAGE_MAP()
	double mLaenge;
public:

protected:
	CStrecke strecke;
};
