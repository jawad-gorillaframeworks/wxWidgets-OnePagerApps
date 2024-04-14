#pragma once
#include <wx/wx.h>

// class to represent the window
//inherit from wx frame
class MainFrame : public wxFrame
{
	// constructor
public:
	MainFrame(const wxString& title);
};