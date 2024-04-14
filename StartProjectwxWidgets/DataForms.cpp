#include "DataForms.h"
#include "MainFrame.h"
#include <wx/wx.h>

wxIMPLEMENT_APP(DataForms);

bool DataForms::OnInit() {
	// instance of main frame
	MainFrame* mainFrame = new MainFrame("Identity Panel Registration - wxWidgets - C++");
	//set window size
	mainFrame->SetClientSize(600,450);
	// show frame
	mainFrame->Show();
	// processing will continue and application will not stop
	return true;
}


