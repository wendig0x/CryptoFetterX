#include "App.h"
#include "MainFrame.h"

#include <wx/wx.h>

wxIMPLEMENT_APP(Fetter);

bool Fetter::OnInit()
{
	MainFrame* mainFrame = new MainFrame("CryptoFetterX v. 0.5");

	mainFrame->SetClientSize(815, 530);
	mainFrame->SetSizeHints(815, 530, 815, 530);

	mainFrame->Center();
	mainFrame->Show();

	return true;


}