#pragma once

#include "wx/dialog.h"
#include "wx/textctrl.h"
#include "wx/string.h"
#include "wx/button.h"
#include "DemodulatorInstance.h"

#define wxID_LABEL_INPUT 3002

class DemodLabelDialog : public wxDialog
{
public:
  
    DemodLabelDialog( wxWindow * parent, wxWindowID id, const wxString & title,
                  DemodulatorInstance *demod = NULL,
                  const wxPoint & pos = wxDefaultPosition,
                  const wxSize & size = wxDefaultSize,
                  long style = wxDEFAULT_DIALOG_STYLE);

    wxTextCtrl * dialogText;

private:
    DemodulatorInstance *activeDemod = nullptr;
    void OnEnter ( wxCommandEvent &event );
    void OnChar ( wxKeyEvent &event );
	void OnShow(wxShowEvent &event);
    DECLARE_EVENT_TABLE()
};
