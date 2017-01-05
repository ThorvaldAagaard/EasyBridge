//----------------------------------------------------------------------------------------
//
// This file and all other Easy Bridge source files are copyright (C) 2002 by Steven Han.
// Use of this file is governed by the GNU General Public License.
// See the files COPYING and COPYRIGHT for details.
//
//----------------------------------------------------------------------------------------

//
// dis_suit.h : header file
//
#include <memory>

class Settings;
class ViewState;
class CObjectWithProperties;

/////////////////////////////////////////////////////////////////////////////
// CDispOptsSuitsPage dialog

class CDispOptsSuitsPage : public CPropertyPage
{
	DECLARE_DYNCREATE(CDispOptsSuitsPage)

// operations
public:
	BOOL Update();

// data
  std::shared_ptr<Settings>	m_app;
	CObjectWithProperties&	m_frame;


// Construction
public:
	CDispOptsSuitsPage(std::shared_ptr<Settings> pApp=NULL, CObjectWithProperties* pFrame=NULL);
	~CDispOptsSuitsPage();

// Dialog Data
	//{{AFX_DATA(CDispOptsSuitsPage)
	enum { IDD = IDP_DISP_SUITS };
	int		m_nSuitSeqOption;
	BOOL	m_bShowDummyTrumpsOnLeft;
	//}}AFX_DATA

// Overrides
	// ClassWizard generate virtual function overrides
	//{{AFX_VIRTUAL(CDispOptsSuitsPage)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	// Generated message map functions
	//{{AFX_MSG(CDispOptsSuitsPage)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

};
