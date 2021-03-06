//----------------------------------------------------------------------------------------
//
// This file and all other Easy Bridge source files are copyright (C) 2002 by Steven Han.
// Use of this file is governed by the GNU General Public License.
// See the files COPYING and COPYRIGHT for details.
//
//----------------------------------------------------------------------------------------

//
// CGameOptionsPropSheet.h : header file
//
#include <memory>

class CObjectWithProperties;
class CGameOptsMechanicsPage;
class CGameOptsInterfacePage;
class CGameOptsCountingPage;
class CGameOptsScoringPage;
class CGameOptsFilesPage;
class CGameOptsGIBPage;
class Settings;


/////////////////////////////////////////////////////////////////////////////
// CGameOptionsPropSheet

class AFX_EXT_CLASS CGameOptionsPropSheet : public CPropertySheet
{
	DECLARE_DYNAMIC(CGameOptionsPropSheet)

// Construction
public:
	CGameOptionsPropSheet(std::shared_ptr<Settings> pApp=NULL, CWnd* pParentWnd = NULL, UINT iSelectPage = 0);

// Attributes
public:
	CGameOptsMechanicsPage*	m_pMechanicsPage;
	CGameOptsInterfacePage* m_pInterfacePage;
	CGameOptsCountingPage*	m_pCountingPage;
	CGameOptsScoringPage*	m_pScoringPage;
	CGameOptsFilesPage*		m_pFilesPage;
	CGameOptsGIBPage*		m_pGibPage;

// Operations
public:
	void UpdateAllPages();
	void OnHelp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CGameOptionsPropSheet)
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CGameOptionsPropSheet();

	// Generated message map functions
protected:
	//{{AFX_MSG(CGameOptionsPropSheet)
	afx_msg BOOL OnHelpInfo(HELPINFO* pHelpInfo);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////
