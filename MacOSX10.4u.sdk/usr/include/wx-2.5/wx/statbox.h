#ifndef _WX_STATBOX_H_BASE_
#define _WX_STATBOX_H_BASE_

#if wxUSE_STATBOX

#include "wx/control.h"

WXDLLEXPORT_DATA(extern const wxChar*) wxStaticBoxNameStr;

// ----------------------------------------------------------------------------
// wxStaticBox: a grouping box with a label
// ----------------------------------------------------------------------------

class WXDLLEXPORT wxStaticBoxBase : public wxControl
{
public:
    wxStaticBoxBase() { }

    // overriden base class virtuals
    virtual bool AcceptsFocus() const { return false; }
    virtual void ApplyParentThemeBackground(const wxColour& bg)
        { SetBackgroundColour(bg); }

private:
    DECLARE_NO_COPY_CLASS(wxStaticBoxBase)
};

#if defined(__WXUNIVERSAL__)
#include "wx/univ/statbox.h"
#elif defined(__WXMSW__)
#include "wx/msw/statbox.h"
#elif defined(__WXMOTIF__)
#include "wx/motif/statbox.h"
#elif defined(__WXGTK__)
#include "wx/gtk/statbox.h"
#elif defined(__WXMAC__)
#include "wx/mac/statbox.h"
#elif defined(__WXCOCOA__)
#include "wx/cocoa/statbox.h"
#elif defined(__WXPM__)
#include "wx/os2/statbox.h"
#endif

#endif // wxUSE_STATBOX

#endif
    // _WX_STATBOX_H_BASE_
