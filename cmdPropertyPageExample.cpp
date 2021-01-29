// cmdPropertyPageExample.cpp : command file
//

#include "StdAfx.h"
#include "PropertyPageExamplePlugIn.h"

////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////
//
// BEGIN PropertyPageExample command
//

#pragma region PropertyPageExample command

// Do NOT put the definition of class CCommandPropertyPageExample in a header
// file. There is only ONE instance of a CCommandPropertyPageExample class
// and that instance is the static thePropertyPageExampleCommand that appears
// immediately below the class definition.

class CCommandPropertyPageExample : public CRhinoCommand
{
public:
  // The one and only instance of CCommandPropertyPageExample is created below.
  // No copy constructor or operator= is required.
  // Values of member variables persist for the duration of the application.

  // CCommandPropertyPageExample::CCommandPropertyPageExample()
  // is called exactly once when static thePropertyPageExampleCommand is created.
  CCommandPropertyPageExample() = default;

  // CCommandPropertyPageExample::~CCommandPropertyPageExample()
  // is called exactly once when static thePropertyPageExampleCommand is destroyed.
  // The destructor should not make any calls to the Rhino SDK. 
  // If your command has persistent settings, then override 
  // CRhinoCommand::SaveProfile and CRhinoCommand::LoadProfile.
  ~CCommandPropertyPageExample() = default;

  // Returns a unique UUID for this command.
  // If you try to use an id that is already being used, then
  // your command will not work. Use GUIDGEN.EXE to make unique UUID.
  UUID CommandUUID() override
  {
    // {2106822A-045E-43AF-93C1-C6BCFAECB7B2}
    static const GUID PropertyPageExampleCommand_UUID =
    { 0x2106822A, 0x45E, 0x43AF, { 0x93, 0xC1, 0xC6, 0xBC, 0xFA, 0xEC, 0xB7, 0xB2 } };
    return PropertyPageExampleCommand_UUID;
  }

  // Returns the English command name.
  // If you want to provide a localized command name, then override 
  // CRhinoCommand::LocalCommandName.
  const wchar_t* EnglishCommandName() override { return L"PropertyPageExample"; }

  // Rhino calls RunCommand to run the command.
  CRhinoCommand::result RunCommand(const CRhinoCommandContext& context) override;
};

// The one and only CCommandPropertyPageExample object
// Do NOT create any other instance of a CCommandPropertyPageExample class.
static class CCommandPropertyPageExample thePropertyPageExampleCommand;

CRhinoCommand::result CCommandPropertyPageExample::RunCommand(const CRhinoCommandContext& context)
{
  // CCommandPropertyPageExample::RunCommand() is called when the user
  // runs the "PropertyPageExample".

  // TODO: Add command code here.

  // Rhino command that display a dialog box interface should also support
  // a command-line, or script-able interface.

  ON_wString str;
  str.Format(L"The \"%s\" command is under construction.\n", EnglishCommandName());
  const wchar_t* pszStr = static_cast<const wchar_t*>(str);
  if (context.IsInteractive())
    RhinoMessageBox(pszStr, PropertyPageExamplePlugIn().PlugInName(), MB_OK);
  else
    RhinoApp().Print(pszStr);

  // TODO: Return one of the following values:
  //   CRhinoCommand::success:  The command worked.
  //   CRhinoCommand::failure:  The command failed because of invalid input, inability
  //                            to compute the desired result, or some other reason
  //                            computation reason.
  //   CRhinoCommand::cancel:   The user interactively canceled the command 
  //                            (by pressing ESCAPE, clicking a CANCEL button, etc.)
  //                            in a Get operation, dialog, time consuming computation, etc.

  return CRhinoCommand::success;
}

#pragma endregion

//
// END PropertyPageExample command
//
////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////
