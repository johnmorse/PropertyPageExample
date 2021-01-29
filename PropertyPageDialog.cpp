// PropertyPageDialog.cpp : implementation file
//

#include "stdafx.h"
#include "PropertyPageDialog.h"
#include "afxdialogex.h"


// PropertyPageDialog dialog

IMPLEMENT_DYNAMIC(CPropertyPageDialog, __base_class)

CPropertyPageDialog::CPropertyPageDialog()
	: TRhinoPropertiesPanelPage<CDialog>(IDD_DIALOG1, IDI_ICON, true)
{
  // NOTE: The last argument passed to the base class constructor tells the
  // framework to delete this object when the page is destroyed when true.
  // DO NOT pass true if you are passing a object on the stack.
}

CPropertyPageDialog::~CPropertyPageDialog()
{
}

void CPropertyPageDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CPropertyPageDialog, CDialog)
END_MESSAGE_MAP()


// CPropertyPageDialog message handlers

BOOL CPropertyPageDialog::OnInitDialog()
{
  BOOL result = __base_class::OnInitDialog();
  return result;
}

bool CPropertyPageDialog::IncludeInNavigationControl(IRhinoPropertiesPanelPageEventArgs& e) const
{
  return true;
}

void CPropertyPageDialog::UpdatePage(IRhinoPropertiesPanelPageEventArgs& e)
{

}

CRhinoCommand::result CPropertyPageDialog::RunScript(IRhinoPropertiesPanelPageEventArgs& e)
{
  return CRhinoCommand::success;
}