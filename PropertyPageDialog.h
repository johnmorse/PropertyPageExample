#pragma once

#include "resource.h"
#include "rhinoSdkTMfcPages.h"

// PropertyPageDialog dialog

class CPropertyPageDialog : public TRhinoPropertiesPanelPage<CDialog>
{
	DECLARE_DYNAMIC(CPropertyPageDialog)

public:
	CPropertyPageDialog();   // standard constructor
	virtual ~CPropertyPageDialog();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

	BOOL OnInitDialog() override;

public:
  /////////////////////////////////////////////////////////////////////////////
  // CRhinoObjectPropertiesDialogPage required overrides
  void UpdatePage(IRhinoPropertiesPanelPageEventArgs& e) override;
  bool IncludeInNavigationControl(IRhinoPropertiesPanelPageEventArgs& e) const override;
  CRhinoCommand::result RunScript(IRhinoPropertiesPanelPageEventArgs& e) override;
  /////////////////////////////////////////////////////////////////////////////
  // CRhinoStackedDialogPag required overrides
  const wchar_t* EnglishTitle() const override { return L"Example"; }
  /////////////////////////////////////////////////////////////////////////////

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
