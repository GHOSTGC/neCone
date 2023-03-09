
#include "mainframe.h"
#include <wx/wx.h>
#include <wx/spinctrl.h>
mainframe::mainframe(const wxString& title) : wxFrame(nullptr, wxID_ANY, title)
{
	wxPanel* panel = new wxPanel(this);
	wxButton* button = new wxButton(panel, wxID_ANY, "Click", wxPoint(150, 50), wxSize(100, 35));
	wxCheckBox* cb = new wxCheckBox(panel, wxID_ANY, "BOY", wxPoint(550, 55));
	wxStaticText* st = new wxStaticText(panel, wxID_ANY, "DOREAMIN IS BAD", wxPoint(150, 150));
	wxTextCtrl* textctrl = new wxTextCtrl(panel, wxID_ANY, "EDIT GARDA HUNXA NO PIROBLEM", wxPoint(550, 155), wxSize(200, -1));
	wxGauge* gauge = new wxGauge(panel, wxID_ANY, 100, wxPoint(150, 250), wxSize(200, -1));
	wxSlider* slider = new wxSlider(panel, wxID_ANY, 26, 0, 100, wxPoint(550, 255), wxSize(200, -1));
	gauge->SetValue(75);
	wxArrayString name;
	name.Add("KALU AALU");
	name.Add("KUSHAL GOD");
	wxChoice* names = new wxChoice(panel, wxID_ANY, wxPoint(150, 375), wxSize(200, -1), name);
	names->Select(1);
	wxSpinCtrl* spinctrl = new wxSpinCtrl(panel, wxID_ANY, "", wxPoint(550, 375), wxSize(200, -1));
	wxListBox* listbox = new wxListBox(panel, wxID_ANY, wxPoint(150, 475), wxSize(200, -1), name);
	wxRadioBox* radiobox = new wxRadioBox(panel, wxID_ANY, "Radio Box", wxPoint(485, 475), wxDefaultSize, name);

}