#pragma once
#include "wx/wx.h"

class cMain : public wxFrame
{

public:
	cMain();
	~cMain();

	/*wxButton *m_btn1 = nullptr;
	wxTextCtrl *m_txt1 = nullptr;
	wxListBox *m_list1 = nullptr;*/

	int mFieldWidth = 10;
	int mFieldlHeight = 10;
	int* mField = nullptr;
	bool bFirstClick = true;

	wxButton** btn;

	void OnButtonClicked(wxCommandEvent& evt);

	wxDECLARE_EVENT_TABLE();
};

